const SectionHeader = ({
  title,
  description,
  eyebrow,
  align = "center",
  className = "",
}) => {
  const alignment = {
    center: "text-center mx-auto",
    left: "text-left",
    right: "text-right ml-auto",
  };

  return (
    <div className={`mb-8 md:mb-12 max-w-3xl ${alignment[align]} ${className}`}>
      {eyebrow && (
        <p className="mb-3 text-sm font-semibold uppercase tracking-widest text-primary">
          {eyebrow}
        </p>
      )}

      <h2 className="text-3xl font-bold tracking-tight text-base-content sm:text-4xl">
        {title}
      </h2>

      {description && (
        <p className="mt-4 text-base leading-relaxed text-base-content/70 sm:text-lg">
          {description}
        </p>
      )}
    </div>
  );
};

export default SectionHeader;
