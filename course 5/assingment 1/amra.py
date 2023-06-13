string = "LLLRLLRRR"
l_parts = string.split("R")
r_parts = string.split("L")
l_parts = [part for part in l_parts if part != ""]
r_parts = [part for part in r_parts if part != ""]

l_lengths = [len(part) for part in l_parts]
r_lengths = [len(part) for part in r_parts]

smaller_lengths = [min(l, r) for l, r in zip(l_lengths, r_lengths)]

result_l = {}
for i in range(len(string)):
    if string[i] == 'L':
        result_l[i] = string[i]

result_r = {}
for i in range(len(string)):
    if string[i] == 'R':
        result_r[i] = string[i]

result_l.update(result_r)

final = []
gstring = ""
z = 0
for i in range(max(len(l_lengths), len(r_lengths)) + 1):
    if z >= len(smaller_lengths):
        break
    if i == 0:
        if result_l[0] == "R":
            print("55 z=", z, "i=", i)
            for j in range(smaller_lengths[z] * 2):
                if j < smaller_lengths[z]:
                    gstring += "R"
                else:
                    gstring += "L"
                    final.append(gstring)
                    gstring = ""
            print("63 z=", z, "i=", i)
            z += 1
            print("65 z=", z, "i=", i)
        else:
            print("67 z=", z, "i=", i)
            for j in range(smaller_lengths[z] * 2):
                if j < smaller_lengths[z]:
                    gstring += "L"
                else:
                    gstring += "R"
                    final.append(gstring)
                    gstring = ""
            print("75 z=", z, "i=", i)
            z += 1
            print("77 z=", z, "i=", i)
    elif i > 0:
        print("79 z=", z, "i=", i)
        if result_l[(l_lengths[i - 1] + r_lengths[i - 1])] == "R":
            for j in range(smaller_lengths[z] * 2):
                if j < smaller_lengths[z]:
                    gstring += "R"
                else:
                    gstring += "L"
                    final.append(gstring)
                    gstring = ""
            print("88 z=", z, "i=", i)
            z += 1
            print("90 z=", z, "i=", i)
        else:
            print("92 z=", z, "i=", i)
            for j in range(smaller_lengths[z] * 2):
                if j < smaller_lengths[z]:
                    gstring += "L"
                else:
                    gstring += "R"
                    final.append(gstring)
                    gstring = ""
            print("100 z=", z, "i=", i)
            z += 1
            print("102 z=", z, "i=", i)

print(final)
