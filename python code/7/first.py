def write_to_file(filename, data):
    try:
        with open(filename, 'w') as file:
            file.write(data)
        print("Data successfully written to the file.")
    except FileNotFoundError:
        print("File not found.")
    except PermissionError:
        print("Permission error: You do not have the required permissions to write to the file.")
    except Exception as e:
        print("An error occurred:", str(e))

if __name__ == "__main__":
    file_name = "example.txt"
    content = "Hello, world!"

    write_to_file(file_name, content)
