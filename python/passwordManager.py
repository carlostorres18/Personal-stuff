# This code helps me on saving websiteName : password in a dictionary that can be saved into
# a JSON file that way it can be read afterwards when the program is finished
# June 5th, 2024 This code can now create and update files that had previous data on them.
#   and also create different files without losing the previous file
#   just make sure .json are the handle for the filenames

import json

def create_dictionary():
    user_dict = {}

    while True:
        key = input("Enter the website name (or type 'exit' to finish): ")
        if key.lower() == 'exit':
            break
        value = input("Enter the password: ")

        user_dict[key] = value

    filename = input("Enter the filename to save the dictionery (e.g., 'data1.json'): ")
    with open(filename, 'w') as file:
        json.dump(user_dict, file)
    

    print(f"Dictionary saved to {filename}")

def load_dictionary(filename):
    try:
        with open(filename, 'r') as file:
            user_dict = json.load(file)
            return user_dict
    except FileNotFoundError:
        print(f"No saved dictionary found in {filename}.")
        return {}

def update_dictionary():
    filename = input("Enter the filename to update the dictionary (e.g., 'data1.json'): ")
    user_dict = load_dictionary(filename)

    while True:
        key = input("Enter the website name to update (or type 'exit' to finish): ")
        if key.lower() == 'exit':
            break
        value = input("Enter the password: ")
        
        user_dict[key] = value
    
    with open(filename, 'w') as file:
        json.dump(user_dict, file)
        
    print(f"Dictionary updated and saved to {filename}")
    
# Main program
while True:
    action = input("Do you want to (create) a new dictionary, (update) an existing one, or (load) an existing one? Type 'exit' to quit: ")
    if action.lower() == 'create':
        create_dictionary()
    elif action.lower() == 'update':
        update_dictionary()
    elif action.lower() == 'load':
        filename = input("Enter the filename to load the dictionary from (e.g., 'data1.json'): ")
        loaded_dict = load_dictionary(filename)
        print("The loaded dictionary is:", loaded_dict)
    elif action.lower() == 'exit':
        break
    else:
        print("Invalid option. Please type 'create', 'update', 'load', or 'exit'.")
