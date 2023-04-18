"""
Update MongoDB database using PyMongo
Create MongoDB Atlas account at https://www.mongodb.com/atlas/database
"""

import pymongo

cluster_address = "" # Replace with your cluster address
database_name = "" # Replace with your database name
collection_name = "" # Replace with your collection name

client = pymongo.MongoClient(cluster_address)
print("All databases:")
print(client.list_database_names())

db = client[database_name]
print("All collections:")
print(db.list_collection_names())

coll = db[collection_name]

new_entry = {
    "name": "John Doe",
    "age": 25,
    "address": "123 Main St",
    "city": "New York",
    "state": "NY",
    "zip": "10001",
    "phone": "555-555-5555",
}

result = coll.insert_one(new_entry)
print("Inserted entry with ID " + str(result.inserted_id))
