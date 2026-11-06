import mysql.connector

mydbconnection = mysql.connector.connect(
    host="localhost", user="root", password="password"
)

db_name = "python-mysql-testdb"

mycursor = mydbconnection.cursor()

query = "CREATE DATABASE " + db_name

mycursor.execute(query)
