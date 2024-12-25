import array as ar

def huffman(frequencies, characters, n):
    nodes = []

    for i in range(n):
        nodes.append((characters[i], frequencies[i]))  
    
    while len(nodes) > 1:
        min1 = 0
        min2 = 1
        
        if nodes[min2][1] < nodes[min1][1]:
            min1, min2 = min2, min1
        
        for i in range(2, len(nodes)):
            if nodes[i][1] < nodes[min1][1]:
                min2 = min1
                min1 = i
            elif nodes[i][1] < nodes[min2][1]:
                min2 = i
        
        left = nodes[min1]
        right = nodes[min2]

        new_node = ((left, right), left[1] + right[1])
        if min1 > min2:
            nodes.pop(min1)
            nodes.pop(min2)
        else:
            nodes.pop(min2)
            nodes.pop(min1)
        
        nodes.append(new_node)   
    return nodes[0]

def generate_codes(tree, prefix="", codes={}):

    if isinstance(tree[0], str):  
        codes[tree[0]] = prefix
    else:
        generate_codes(tree[0][0], prefix + "0", codes)  
        generate_codes(tree[0][1], prefix + "1", codes) 
    return codes

n = int(input("Enter the number of characters: "))
characters = []
frequencies = ar.array('i', [])

print("Enter the characters:")
for i in range(n):
    characters.append(input()) 

print("Enter the corresponding frequencies:")
for i in range(n):
    frequencies.append(int(input()))

huffman_tree = huffman(frequencies, characters, n)

print("Tree:", huffman_tree)  
print("Total Frequency:", huffman_tree[1])  

huffman_codes = generate_codes(huffman_tree)

print("\nHuffman Codes for each character:")
for char, code in huffman_codes.items():
    print(f"{char}: {code}")
