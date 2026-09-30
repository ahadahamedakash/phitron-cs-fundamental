class User:
    def __init__(self, name, email):
        self.name = name
        self.email = email
        self.skills = []

    def add_skills(self, skill):
        self.skills.append(skill)


userInfo = User("Jhon", "jhon@email.com")
userInfo.add_skills("Python")
userInfo.add_skills("JavaScript")
userInfo.add_skills("TypeScript")

print(userInfo.name)
print(userInfo.email)

print(userInfo.skills)
