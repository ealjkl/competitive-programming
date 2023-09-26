s = "abcheaibcdi"
sub = "headi"

def is_sub(sub, s):
    first_char = sub[0]
    sub_new = sub[1:]
    print(first_char)
    print(sub_new)
    if s.find(first_char) < 0:
        return False
    else: 
        first_char_idx = s.find(sub)
        if first_char_idx >= 0: 
            return True
        else:
            print("first_char:", first_char)
            s_new = s[first_char_idx:]
            print("sub_new", sub_new)
            print("s_new", s[first_char_idx:])
            return is_sub(sub_new, s_new)


# print( s.find("heai") )
print(is_sub(sub, s))

