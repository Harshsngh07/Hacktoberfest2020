# KMP String Pattern Searching Algorithm

def compute_lps_array(pattern, pat_len, longest_prefix_suffix):
    pat_index = 1
    len_prev = 0 # length of the previous longest prefix suffix
    while pat_index < pat_len:
        if pattern[pat_index] == pattern[len_prev]:
            len_prev += 1
            longest_prefix_suffix[pat_index] = len_prev
            pat_index += 1
        else:
            if len_prev != 0:
                len_prev = longest_prefix_suffix[len_prev-1]
            else:
                longest_prefix_suffix[pat_index] = 0
                pat_index += 1

def kmp_search(txt, pattern):
    text_len = len(txt)
    pat_len = len(pattern)

    # create list that will hold the longest prefix suffix values for pattern
    longest_prefix_suffix = [0]*pat_len
    # Preprocess the pattern
    compute_lps_array(pattern, pat_len, longest_prefix_suffix)

    txt_index = 0
    pat_index = 0
    while pat_index < text_len:
        if pattern[txt_index] == txt[pat_index]:
            pat_index += 1
            txt_index += 1
        if txt_index == pat_len:
            print("Found pattern at index " + str(pat_index-txt_index))
            txt_index = longest_prefix_suffix[txt_index-1]
        elif pat_index < text_len and pattern[txt_index] != txt[pat_index]:
            if txt_index != 0:
                txt_index = longest_prefix_suffix[txt_index-1]
            else:
                pat_index += 1

txt = input("Enter the string to be searched: ") #"AAAAAACAAAAAAFAAAAAB"
pattern = input("Enter the substring to look for: ") #"AAAB"
kmp_search(txt, pattern)