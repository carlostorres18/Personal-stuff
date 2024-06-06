# This code helps me on saving websiteName : password in a dictionary that can be saved into
# a JSON file that way it can be read afterwards when the program is finished
# June 5th, 2024 This code can now create and update files that had previous data on them.
#   and also create different files without losing the previous file
#   just make sure .json are the handle for the filenames

# June 6th, 2024 target: create a delete function to delete either an specific password
#   within a file, or delete a file all together.
# add a way to display previously created dictionaries at the beginning of the program to
#   show the user what dictionaries have created

# Successfully created delete, delete_entry, and display functions.
#   Also added comments to functions to show what they are for.


import json
import os
import glob

# This function will display any JSON files that were created for this program
def display_json_files():
    json_files = glob.glob('*json')
    if not json_files:
        print("No JSON files found.")
    else:
        print("Existing JSON files:")
        for i, file in enumerate(json_files, 1):
            print(f"{i}. {file}")
    
# This function creates a dictionary for you to add passwords
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

# This function allows you to see within a dictionary its contents
def load_dictionary(filename):
    try:
        with open(filename, 'r') as file:
            user_dict = json.load(file)
            return user_dict
    except FileNotFoundError:
        print(f"No saved dictionary found in {filename}.")
        return {}

# This function allows you to add to previously created dictionaries
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

# This function deletes a dictionary all together
def delete_dictionary():
    filename = input("Enter the filename to delete the dictionary (e.g., 'data1.json'): ")
    if os.path.exists(filename):
        os.remove(filename)
        print(f"Dictionary {filename} has been deleted.")
    else:
        print(f"No file named {filename} exists.")
        
# This function deletes specific passwords and websites in a certain file
def delete_password_entry():
    filename = input("Enter the filename to delete an entry from the dictionary (e.g., 'data1.json'): ")
    user_dict = load_dictionary(filename)
    if not user_dict:
        return
    
    print("Current passwords saved in the file:")
    for key, value in user_dict.items():
        print(f"Website: {key}, Password: {value}")
    
    key = input("Enter the website name to delete the password for: ")
    if key in user_dict:
        del user_dict[key]
        with open(filename, 'w') as file:
            json.dump(user_dict, file)
        print(f"Password for {key} has been deleted.")
    else:
        print(f"No entry found for website {key}.")
   
# Main program
print("Welcome to the Password Manager.")
while True:
    display_json_files()
    action = input("Do you want to (create) a new dictionary, (display) all dictionaries, (update) an existing one, or (load) an existing one, or (delete) a dictionary or (delete_entry) a password entry? Type 'exit' to quit: ")
    if action.lower() == 'create':
        display_json_files()
        create_dictionary()
    elif action.lower() == 'display':
        display_json_files()
    elif action.lower() == 'update':
        display_json_files()
        update_dictionary()
    elif action.lower() == 'load':
        display_json_files()
        filename = input("Enter the filename to load the dictionary from (e.g., 'data1.json'): ")
        loaded_dict = load_dictionary(filename)
        print("The loaded dictionary is:", loaded_dict)
    elif action.lower() == 'delete':
        display_json_files()
        delete_dictionary()
    elif action.lower() == 'delete_entry':
        display_json_files()
        delete_password_entry()
    elif action.lower() == 'exit':
        break
    else:
        print("Invalid option. Please type 'create', 'display', 'update', 'load', 'delete', 'delete_entry' or 'exit'.")
