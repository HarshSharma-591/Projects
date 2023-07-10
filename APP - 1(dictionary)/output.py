import json
from difflib import get_close_matches

data = json.load(open("data.json"))

def definition(values):
    values = values.lower()
    if values in data:
        return data[values]

    elif len(get_close_matches(values, data.keys())) > 0:
        yn = input("Did you mean %s. if yes then press Y or press N: " % get_close_matches(values, data.keys())[0])
        if yn == "Y":
            return data[get_close_matches(values, data.keys())[0]]
        elif yn == "N":
            return "The word does not exist. Please try again."
        else:
            return "We did not understand your query." 

    else:
        return "The word does not exist. Please try again. "

values = input("Enter word: ")
output = definition(values)
if type(output) == list:
    for item in output:
        print(item)
else:
    print(output)        