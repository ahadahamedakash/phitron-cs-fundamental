# default args and kargs


def sum(n1, n2=0):
    result = n1 + n2
    return result


total = sum(5, 6)

print("total: ", total)


def pNums(*nums):
    for n in nums:
        print(n)


pNums(11, 12, 15)

# parameters in order


def printFullName(firstName, lastName):
    return f"{firstName} {lastName}"


name = printFullName(lastName="Doe", firstName="Jhon")
print(name)


# def functionName(one, two, *args, **kargs):
#     for key, value in kargs.items():
#         print(key)

# Return multiple things in func: return first, second (tuple) - return [ first, second ] (list)
