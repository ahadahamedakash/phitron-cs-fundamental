import Container from "./Container";

const Footer = () => {
  return (
    <footer className="w-full bg-neutral text-neutral-content">
      <Container>
        <div className="footer grid grid-cols-1 gap-10 py-12 sm:grid-cols-2 lg:grid-cols-4">
          <aside className="max-w-sm">
            <a href="/" className="text-2xl font-extrabold tracking-tight">
              <span className="text-primary">Book</span>Nest
            </a>

            <p className="mt-3 leading-relaxed text-neutral-content/70">
              Your gateway to knowledge. Discover new books, reserve your
              favorites, and manage your library experience in one place.
            </p>

            <p className="mt-2 text-sm text-neutral-content/60">
              Making reading accessible to everyone.
            </p>
          </aside>

          <nav>
            <h6 className="footer-title opacity-100">Quick Links</h6>
            <a href="/" className="link link-hover">
              Home
            </a>
            <a href="/books" className="link link-hover">
              Browse Books
            </a>
            <a href="/categories" className="link link-hover">
              Categories
            </a>
            <a href="/about" className="link link-hover">
              About Us
            </a>
          </nav>

          <nav>
            <h6 className="footer-title opacity-100">Library Services</h6>
            <a href="/reservations" className="link link-hover">
              My Reservations
            </a>
            <a href="/my-books" className="link link-hover">
              Borrowed Books
            </a>
            <a href="/login" className="link link-hover">
              Member Login
            </a>
            <a href="/help" className="link link-hover">
              Help & Support
            </a>
          </nav>

          <nav>
            <h6 className="footer-title opacity-100">Get in Touch</h6>

            <p className="text-neutral-content/70">
              Have a question? We're here to help.
            </p>

            <a href="mailto:support@booknest.com" className="link link-hover">
              support@booknest.com
            </a>

            <a href="/contact" className="link link-hover">
              Contact Us
            </a>

            <div className="mt-3 flex gap-3">
              <a
                href="https://facebook.com"
                target="_blank"
                rel="noreferrer"
                aria-label="Facebook"
                className="btn btn-circle btn-ghost btn-sm"
              >
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  viewBox="0 0 24 24"
                  fill="currentColor"
                  className="h-5 w-5"
                >
                  <path d="M13.5 21v-8h2.7l.4-3h-3.1V8.1c0-.9.3-1.5 1.6-1.5h1.7V3.9c-.3 0-1.4-.1-2.6-.1-2.6 0-4.3 1.6-4.3 4.5V10H7v3h2.9v8h3.6Z" />
                </svg>
              </a>

              <a
                href="https://instagram.com"
                target="_blank"
                rel="noreferrer"
                aria-label="Instagram"
                className="btn btn-circle btn-ghost btn-sm"
              >
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  viewBox="0 0 24 24"
                  fill="none"
                  stroke="currentColor"
                  strokeWidth="1.8"
                  className="h-5 w-5"
                >
                  <rect x="3" y="3" width="18" height="18" rx="5" />
                  <circle cx="12" cy="12" r="4" />
                  <circle cx="17.5" cy="6.5" r="0.8" fill="currentColor" />
                </svg>
              </a>

              <a
                href="https://linkedin.com"
                target="_blank"
                rel="noreferrer"
                aria-label="LinkedIn"
                className="btn btn-circle btn-ghost btn-sm"
              >
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  viewBox="0 0 24 24"
                  fill="currentColor"
                  className="h-5 w-5"
                >
                  <path d="M5.2 3.5a2 2 0 1 0 0 4 2 2 0 0 0 0-4ZM3.5 9h3.4v11H3.5Zm5.5 0h3.3v1.5h.1a3.7 3.7 0 0 1 3.3-1.8c3.5 0 4.2 2.3 4.2 5.2V20h-3.5v-5.4c0-1.3 0-3-1.8-3s-2.1 1.4-2.1 2.9V20H9Z" />
                </svg>
              </a>
            </div>
          </nav>
        </div>

        <div className="border-t border-neutral-content/15">
          <div className="flex flex-col items-center justify-between gap-3 py-5 text-center text-sm text-neutral-content/60 sm:flex-row sm:text-left">
            <p>© {new Date().getFullYear()} BookNest. All rights reserved.</p>

            <div className="flex flex-wrap justify-center gap-4">
              <a href="/privacy" className="link link-hover">
                Privacy Policy
              </a>
              <a href="/terms" className="link link-hover">
                Terms of Service
              </a>
            </div>
          </div>
        </div>
      </Container>
    </footer>
  );
};

export default Footer;
