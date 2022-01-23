def convert_to_emoji(message):
    words = message.split(" ")
    emojis = {
        ":)" : "😃",
        ":(" : "😢",
        "XD" : "😂"
    }
    output = ""
    for word in words:
        output += emojis.get(word, word) + " "
    return output

message = input(">")
print(convert_to_emoji(message))