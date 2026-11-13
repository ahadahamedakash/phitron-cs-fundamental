def serve():
    yield "plate 1"
    yield "plate 2"
    yield "plate 3"


plates = serve()

# print(plates)
print(type(serve()))

# for plate in plates:
#     print(plate)

print(next(plates))
print(next(plates))
print(next(plates))
