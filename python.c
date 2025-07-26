1)fruits = ["Apple", "Banana", "Orange", "Grapes", "Mango"]
print("First fruit:", fruits[0])
print("Last fruit:", fruits[-1])
print("Middle fruits:", fruits[1:4])

    
students = {
    "Alice": 21,
    "Bob": 22,
    "Charlie": 20,
    "David": 23,
    "Eve": 19
}

2)print("Age of the specific student:", students["Charlie"])

students["Frank"] = 24

print("Updated dictionary:", students)

  3)  def duplicate(numbers):
    duplicates = []
    seen = set()
    for num in numbers:
        if num in seen and num not in duplicates:
            duplicates.append(num)
        else:
            seen.add(num)
    return duplicates

nums = [1, 2, 3, 4, 2, 5, 6, 3, 7, 8]
print("Duplicates:", duplicate(nums))

    4)def group(lst, size):
    return [lst[i:i + size] for i in range(0, len(lst), size)]

data = [1, 2, 3, 4, 5, 6, 7, 8, 9]
grouped = group(data, 3)
print("Grouped list:", grouped)

    5)
def lensort(strings):
    return sorted(strings, key=len)


words = ["apple", "fig", "banana", "kiwi", "grape"]
print("Length-sorted:", lensort(words))
def extsort(files):
    return sorted(files, key=lambda x: x.split('.')[-1] if '.' in x else '')

file_list = ["report.docx", "data.csv", "image.png", "notes.txt", "script.py"]
print("Extension-sorted:", extsort(file_list))


    6)with open("demo.txt", "w") as file:
    file.write("This is the first line.\n")
    file.write("This is the second line.\n")
    lines = ["This is the third line.\n", "This is the fourth line.\n"]
    file.writelines(lines)


with open("demo.txt", "r") as file:
    content = file.read()
    print("Full content using read():\n", content)


with open("demo.txt", "r") as file:
    first_line = file.readline()
    print("First line using readline():", first_line.strip())
7)def file_stats(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
        
    num_lines = len(lines)
    num_words = sum(len(line.split()) for line in lines)
    num_chars = sum(len(line) for line in lines)

    print(f"Lines: {num_lines}")
    print(f"Words: {num_words}")
    print(f"Characters: {num_chars}")

file_stats("demo.txt")

    8)def reverse_file(filename):
    try:
        with open(filename, 'r') as file:
            lines = file.readlines()
        
        print("Lines in reverse order:")
        for line in reversed(lines):
            print(line.rstrip()) 
    except FileNotFoundError:
        print(f"Error: The file '{filename}' was not found.")


reverse_file("sample.txt")

    9)def reverse_each_line(filename):
    try:
        with open(filename, 'r') as file:
            for line in file:
                
                print(line.rstrip()[::-1])
    except FileNotFoundError:
        print(f"Error: The file '{filename}' does not exist.")

reverse_each_line("sample.txt")


