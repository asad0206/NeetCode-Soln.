def normalize_shift(shift):
    # Normalize the shift value to be within one full alphabet cycle
    return shift % 26

def caesar_cipher(text, shift):
    shift = normalize_shift(shift)
    result = ""

    for char in text:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            shifted_char = chr((ord(char) - base + shift) % 26 + base)
            result += shifted_char
        else:
            # If the character is not a letter, keep it unchanged
            result += char

    return result

def detect_operation(shift):
    # Detect the operation based on the sign of the shift value
    return "Encryption" if shift >= 0 else "Decryption"

def get_valid_shift():
    while True:
        try:
            shift_str = input("Enter the shift value (an integer): ")
            shift = int(shift_str)
            return shift
        except ValueError:
            print("Invalid shift value. Please enter an integer.")

def main():
    print("Caesar Cipher")
    text = input("Enter the text: ")
    shift = get_valid_shift()
    operation = detect_operation(shift)
    # Perform the operation
    result_text = caesar_cipher(text, shift)
    print(f"{operation} result:", result_text)

if __name__ == "__main__":
    main()
