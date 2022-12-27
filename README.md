
# Txt file Compression -Huffman encoding

> Huffman Coding is a technique of compressing data to reduce its size without losing any of the details. It was first developed by David Huffman. Huffman Coding is generally useful to compress the data in which there are frequently occurring characters.
## Window App
A simple minimalistic application has been created for convenience. To use it simply browse 
```
App-Windows > release > huffman-file-compression.exe
```
- Run the **.exe** file.
- Select your source file location and save location and then press encode button. 
- Upon successfull encoding(compression) a message window will pop pup.
- You can decode the encoded file by followin the same procedure in decode section.
> You must select the source and destination location for successfull compression and decompression.
> You may get security warning on windows. Just click on `More info` and then `Run anyway` 
## For Developer
If you want to compile the code on command prompt/  terminal, you can do so by browsing to `huffman-file-compression\src` in terminal and running following these commands
```
g++ encode.cpp huffman.cpp -o main
```
Or
```
g++ decode.cpp huffman.cpp -o main
```
This will create a encode\decode executable file named as main
```
.\main inputFile.txt outputFile.txt
```
`.\main`  runs main.exe where `inputFile & outputFile` are passed as arguments to main.


## Collaborators
+ [Talha Imtiaz](https://github.com/talhaimtiaz09)
+ [Haider Zaidi](https://github.com/haiderzaidi07)
+ [Muhammad Ali Khan](https://github.com/Muhammad-Ali-Khan9)


## References
[Huffman Code implementation](https://coderspacket.com/huffman-coding-implementation-for-text-files-in-c)
## Qt
> Qt is cross-platform software for creating graphical user interfaces as well as cross-platform applications that run on various software and hardware platforms such as Linux, Windows, macOS, Android. 
