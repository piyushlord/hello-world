import sys
import textwrap

def wrap_file_lines(filename, width):
    try:
        with open(filename, 'r') as file:
            for line in file:
                wrapped = textwrap.fill(line.rstrip(), width=width)
                print(wrapped)
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found.")
    except ValueError:
        print("Error: Width must be an integer.")

# Main execution
if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python wrap.py <filename> <width>")
    else:
        filename = sys.argv[1]
        try:
            width = int(sys.argv[2])
            wrap_file_lines(filename, width)
        except ValueError:
            print("Error: Width must be an integer.")
