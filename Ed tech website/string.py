string1 = input()
string2 = input()


for i in range(len(string1)):
  for j in range(len(string2)):
    if string1[i] == string2[j]:
      print("The char that matched are ", string1[i], string2[j])
