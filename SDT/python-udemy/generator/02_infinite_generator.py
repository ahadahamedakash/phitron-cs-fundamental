def inf_serve():
    cnt = 1
    while True:
        yield f"Serverd #{cnt}"
        cnt += 1


ser = inf_serve()

for _ in range(10):
    print(next(ser))
