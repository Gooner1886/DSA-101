# Check if string is a palindrome by recursion

def palindrome(str):
    if (len(str) == 1):
        return True

    if(str[0] == str[len(str) - 1]):
        return palindrome(str[1:-1])

    else:
        return False


string = input('Enter the string to be checked: ')
result = palindrome(string)
if result == True:
    print('String is Palindrome')
else:
    print("String ain't palindrome")
