s = "RLRLRLRL"
Lflag = 0
Rflag = 0
L_strings = []
R_strings = []
gString = ""
Final = []
L = ""
R = ""
for i in range(0, len(s)):
    if s[i] == "L":
        Lflag += 1
    else:
        Rflag += 1

    if i + 1 != len(s):
        if s[i] == "R" and s[i + 1] == "L":
            L_strings.append(Lflag)
            R_strings.append(Rflag)
            Lflag = 0
            Rflag = 0

    if i + 1 == len(s):
        L_strings.append(Lflag)
        R_strings.append(Rflag)
        break

for i in range(0, len(L_strings)):
    if L_strings[i] == R_strings[i]:
        for j in range(0, L_strings[i]):
            L += "L"

        for j in range(0, R_strings[i]):
            R += "R"
        gString = L + R
        Final.append(gString)
        gString = ""
        L = ""
        R = ""

    elif L_strings[i] > R_strings[i]:
        for j in range(0, R_strings[i]):
            L += "L"

        for j in range(0, R_strings[i]):
            R += "R"
        gString = L + R
        Final.append(gString)
        gString = ""
        L = ""
        R = ""

    elif L_strings[i] < R_strings[i]:
        for j in range(0, L_strings[i]):
            L += "L"

        for j in range(0, L_strings[i]):
            R += "R"
        gString = L + R
        Final.append(gString)
        gString = ""
        L = ""
        R = ""


solutionNumber = len(Final)
for i in Final:
    if i == "":
        solutionNumber -= 1

print(solutionNumber)
for i in Final:
    if i != "":
        print(i)
