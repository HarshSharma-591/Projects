import json

data = json.load(open("data.json"))

def definition(values):
    return data[values]

value = input("Enter a word: ")

print(definition(value))