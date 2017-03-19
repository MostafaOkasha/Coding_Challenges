# Enigma Encryption | Difficulty: Hard  |  Source: Microsoft College Code Competition

### You have been tasked with writing the decryption algorithm for a simple Enigma-like machine (extra-curricular reading: https://en.wikipedia.org/wiki/Enigma_machine).

This machine works as follows:

It has 3 rings of 16 hex numbers. Each ring has a position. To simplify things, we will start all rings at position 0.

The machine first takes input ASCII text and converts it into a hex representation; this is called the encoded message (note, encoded is not encrypted).

The encoded message is then fed into the machine 1 hex character at a time to generate the encrypted output characters. In particular, these steps occur:

The hex character is converted to its numeric value.
The numeric value is added to each of the numeric values at the current position of each ring. (This is the sum of 4 numbers, the input character and 3 ring values).
The sum is modded by 16.
The modded number is converted back into a hex value and is added to the encrypted stream.
The machine rotates the rings. It rotates the ring with the current highest value by 1 (in the event of a tie for highest value, use the first ring). Since these are rings, rotating a ring should be a loop.
Your task is to decrypt a message given 3 rings and the encrypted message.

Example Ring Rotation:

81EC0379DAB45F62
2A95DEBF6C873401
F06C8D19523A7B4E <<< Highest slot, this one rotates
^
Read location

81EC0379DAB45F62 <<< Highest slot, this one rotates
2A95DEBF6C873401
06C8D19523A7B4EF 


1EC0379DAB45F628 
2A95DEBF6C873401 <<< Highest slot, this one rotates
06C8D19523A7B4EF 
Input definition

An input file for this problem will contain 4 lines.

The first 3 lines will be 16 hex characters. Each of these are the encryption rings.

The 4th line is the encrypted ASCII message, represented in hex.

Output definition

Your output file should contain the decrypted message.

Example input

81EC0379DAB45F62
2A95DEBF6C873401
F06C8D19523A7B4E
C27CDC22F9B1C96F38149FF61E655F9B3E21570000A8688D82E094F21EB8578F73E151B7EE783C6953F079
Example output

8A6C9D1**This is a secret message!**C3FAE0B