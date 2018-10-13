def countSubStringMatchRecursive(target, key):
    """Counts how many times key is in string(string,key)"""
    x = target.find(key)
    return x!=-1 and countSubStringMatchRecursive(target[x + 1:], key) + 1

def minion_game(string):
    vowel = list('AIUEO')
    liststr = list(string)

    words = set()

    sl = range(len(liststr))
    for i in sl:
        tmp = liststr[i]
        words.add(tmp)
        for j in sl[i + 1:]:
            tmp += liststr[j]
            words.add(tmp)

    const_word_count = 0
    vowel_word_count = 0

    for word in words:
        if word[0] not in vowel:
            # const_word_count += string.count(word)
            const_word_count += countSubStringMatchRecursive(string, word)
        else:
            # vowel_word_count += string.count(word)
            vowel_word_count += countSubStringMatchRecursive(string, word)
            # print(word, string.count(word))
    # print (const_word_count, vowel_word_count)

    if vowel_word_count < const_word_count:
        print('Stuart', const_word_count)
    elif vowel_word_count == const_word_count:
        print('Draw')
    else:
        print('Kevin', vowel_word_count)
        
