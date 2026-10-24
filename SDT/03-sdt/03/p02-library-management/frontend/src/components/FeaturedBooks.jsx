import BooksCard from "./BooksCard";
import Section from "./Section";
import SectionHeader from "./SectionHeader";

const FeaturedBooks = () => {
  return (
    <Section className="bg-base-200" id="featured-books">
      <SectionHeader
        eyebrow="Handpicked for You"
        title="Featured Books"
        description="Explore popular titles and discover your next favorite read."
      />

      <div className="grid grid-cols-1 gap-6 sm:grid-cols-2 lg:grid-cols-4">
        {Array.from({ length: 12 }).map((_, index) => (
          <BooksCard key={index} />
        ))}
      </div>
    </Section>
  );
};

export default FeaturedBooks;
