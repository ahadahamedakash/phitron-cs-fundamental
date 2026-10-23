import Container from "./Container";

const Section = ({
  children,
  className = "",
  contentClassName = "",
  container = true,
  spacing = true,
  as: Tag = "section",
  id,
}) => {
  return (
    <Tag
      id={id}
      className={`${spacing ? "py-12 md:py-16 lg:py-20" : ""} ${className}`}
    >
      {container ? (
        <Container className={contentClassName}>{children}</Container>
      ) : (
        children
      )}
    </Tag>
  );
};

export default Section;
