const BooksCard = () => {
  return (
    <div className="card bg-base-100 shadow-sm">
      <div className="card-body">
        <h3 className="card-title">The Great Gatsby</h3>
        <p>A timeless classic worth discovering.</p>
        <div className="card-actions justify-end">
          <a href="/books" className="btn btn-primary btn-sm">
            View Book
          </a>
        </div>
      </div>
    </div>
  );
};

export default BooksCard;
