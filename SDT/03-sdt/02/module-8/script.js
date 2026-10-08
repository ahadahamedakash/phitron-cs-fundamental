//

const BASE_URL = `https://www.thecocktaildb.com/api/json/v1/1`;

const MAX_CART_ITEMS = 7;

let cocktails = [];
let cart = [];

const cocktailContainer = document.getElementById("cocktailContainer");
const cartBody = document.getElementById("cartBody");
const cartCount = document.getElementById("cartCount");
const searchForm = document.getElementById("searchForm");
const searchInput = document.getElementById("searchInput");
const modalBody = document.getElementById("modalBody");

const detailsModal = new bootstrap.Modal(
  document.getElementById("detailsModal"),
);

async function fetchCocktails(searchValue = "") {
  try {
    loading();

    const value = searchValue.trim();

    let url;

    if (!value) {
      url = `${BASE_URL}/search.php?f=a`;
    } else if (value.length === 1) {
      url = `${BASE_URL}/search.php?f=${encodeURIComponent(value)}`;
    } else {
      url = `${BASE_URL}/search.php?s=${encodeURIComponent(value)}`;
    }

    const response = await fetch(url);

    if (!response.ok) {
      throw new Error("Failed to fetch cocktail data.");
    }

    const data = await response.json();

    console.log(data);

    cocktails = data?.drinks || [];

    renderCocktails();
  } catch (error) {
    console.error(error);

    cocktailContainer.innerHTML = `

      <div class="col-12">
        <div class="error-box">
          <h5 class="mt-3">Something went wrong</h5>

          <p class="text-muted mb-0">Could not load cocktail data. Please try again.</p>
        </div>
      </div>

    `;
  }
}

async function fetchCocktailDetails(id) {
  try {
    modalBody.innerHTML = `

      <div class="text-center py-5">
        <div class="spinner-border text-secondary"></div>

        <p class="mt-3 mb-0">Loading details...</p>
      </div>

    `;

    detailsModal.show();

    const response = await fetch(`${BASE_URL}/lookup.php?i=${id}`);

    if (!response.ok) {
      throw new Error("Failed to fetch cocktail details.");
    }

    const data = await response.json();

    if (!data?.drinks || !data?.drinks.length) {
      throw new Error("Cocktail not found.");
    }

    renderModal(data.drinks[0]);
  } catch (error) {
    console.error(error);

    modalBody.innerHTML = `

      <div class="alert alert-danger mb-0">
        Unable to load cocktail details.
      </div>

    `;
  }
}

function renderCocktails() {
  if (!cocktails.length) {
    cocktailContainer.innerHTML = `

      <div class="col-12">
        <div class="error-box">
          <h5 class="mt-3">No cocktails found!</h5>
          <p class="text-muted mb-0">Try another cocktail name.</p>
        </div>
      </div>

    `;

    return;
  }

  cocktailContainer.innerHTML = cocktails
    .map((drink) => {
      const isSelected = cart.some((item) => item.idDrink === drink.idDrink);

      const cartFull = cart.length >= MAX_CART_ITEMS;

      const buttonDisabled = isSelected;

      let buttonText = "Add to Cart";

      if (isSelected) {
        buttonText = "Already isSelected";
      }

      return `

          <div class="col-md-6 col-lg-4">
            <div class="cocktail-card">
              <img
                src="${drink.strDrinkThumb}"
                alt="${drink.strDrink}"
              />

              <div class="card-body">
                <h5 class="card-title">Name: ${drink.strDrink}</h5>

                <p><strong>Category: </strong>${drink.strCategory}</p>

                <p class="instruction-text"><strong>Instructions: </strong>${drink.strInstructions.slice(0, 15)}...</p>

                <div class="d-flex gap-2 mt-3">
                  <button
                    type="button"
                    class="btn btn-sm flex-grow-1
                    ${buttonDisabled ? "already-isSelected" : "btn-secondary"}"
                    ${buttonDisabled ? "disabled" : ""}
                    onclick="addToCart(
                      '${drink.idDrink}'
                    )"
                  >
                    ${buttonText}
                  </button>

                  <button
                    type="button"
                    class="btn btn-sm details-btn"
                    onclick="fetchCocktailDetails(
                      '${drink.idDrink}'
                    )"
                  >
                    Details
                  </button>
                </div>
              </div>
            </div>
          </div>

        `;
    })
    .join("");
}

function addToCart(id) {
  if (cart.length >= MAX_CART_ITEMS) {
    alert(`You can select maximum ${MAX_CART_ITEMS} cocktails.`);

    return;
  }

  const cocktail = cocktails.find((item) => item.idDrink === id);

  if (!cocktail) {
    return;
  }

  const alreadyExists = cart.some((item) => item.idDrink === id);

  if (alreadyExists) {
    return;
  }

  cart.push(cocktail);

  renderCart();

  renderCocktails();
}

function renderCart() {
  cartCount.textContent = cart.length;

  if (!cart.length) {
    cartBody.innerHTML = `

      <tr>
        <td colspan="4" class="empty-cart pt-2 pb-2" >No cocktail is added!</td>
      </tr>
    `;

    return;
  }

  cartBody.innerHTML = cart.map(
    (drink, index) => `

          <tr>
            <td>${index + 1}</td>

            <td>
              <img
                class="cart-img"
                src="${drink.strDrinkThumb}"
                alt="${drink.strDrink}"
              />
            </td>

            <td>${drink.strDrink}</td>
          </tr>

        `,
  );
}

function renderModal(drink) {
  const ingredients = [];

  for (let i = 1; i <= 15; i++) {
    const ingredient = drink[`strIngredient${i}`];

    const measure = drink[`strMeasure${i}`];

    if (ingredient) {
      ingredients.push(`

        <li>
          ${measure}
          ${ingredient}
        </li>

      `);
    }
  }

  modalBody.innerHTML = `

    <div class="row g-4">
      <div class="col-md-5">
        <img
          src="${drink.strDrinkThumb}"
          alt="${drink.strDrink}"
          class="modal-img"
        />
      </div>

      <div class="col-md-7">
        <h3 class="mb-3">${drink.strDrink}</h3>
        <div class="mb-3">
            <spanclass="badge text-bg-secondary me-1">${drink.strCategory}</span>
            <spanclass="badge text-bg-dark"${drink.strAlcoholic}</span>
        </div>
        <p class="mb-2"><strong>Glass:</strong>${drink.strGlass}</p>
        <h6 class="mt-4">
          Ingredients
        </h6>
        <ul class="ingredient-list ps-4">
          ${
            ingredients.length
              ? ingredients.join("")
              : `
                <li>
                  No ingredients available.
                </li>
              `
          }
        </ul>
      </div>
      <div class="col-12">
        <h6>Instructions</h6>
        <p class="mb-0">${drink.strInstructions || "No instructions available"}</p>
      </div>
    </div>

  `;
}

searchForm.addEventListener("submit", function (event) {
  event.preventDefault();

  fetchCocktails(searchInput.value);
});

function loading() {
  cocktailContainer.innerHTML = `

    <div class="col-12">
      <div class="loading-box">
        <div
          class="spinner-border text-secondary"
          role="status"
        ></div>
        <p class="mt-3 mb-0">
          Loading cocktails...
        </p>
      </div>
    </div>

  `;
}

fetchCocktails();

renderCart();
