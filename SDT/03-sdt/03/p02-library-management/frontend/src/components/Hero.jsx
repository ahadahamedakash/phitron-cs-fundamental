import Container from "./Container";

const Hero = () => {
  return (
    <section
      className="hero relative min-h-[70vh] w-full bg-cover bg-center"
      style={{
        backgroundImage:
          "url(https://images.unsplash.com/photo-1507842217343-583bb7270b66?auto=format&fit=crop&w=1920&q=80)",
      }}
    >
      <div className="absolute inset-0 bg-black/55" />

      <Container className="relative z-10">
        <div className="flex min-h-[70vh] items-center justify-center py-12 text-center text-white">
          <div className="max-w-3xl">
            <span className="mb-5 inline-block rounded-full bg-white px-5 py-2 font-semibold text-gray-900">
              Your Gateway to Knowledge
            </span>

            <h1 className="mb-5 text-4xl font-extrabold md:text-6xl">
              Discover, Read & Reserve Your Next Book
            </h1>

            <p className="mx-auto mb-8 max-w-2xl text-lg leading-relaxed">
              Explore books, reserve your favorite titles, and manage your
              library experience - all in one place.
            </p>

            <div className="flex flex-col justify-center gap-4 sm:flex-row">
              <a href="/login" className="btn btn-primary btn-lg">
                Login to Your Account
              </a>

              <a
                href="/books"
                className="btn btn-outline btn-lg border-white text-white hover:bg-white hover:text-gray-900"
              >
                Explore Books
              </a>
            </div>
          </div>
        </div>
      </Container>
    </section>
  );
};

export default Hero;
