import random
#timer
import time
start_time = time.time()


words = ["zebrawood family","zebrawood tree","zep","Zephaniah","zero coupon security","Zellig Sabbatai Harris","Zellig Harris","Zeitgeist","Zen","zeroth","Zeno","zesty","Zigadenus nuttalli","Zhou En-lai","a","admit","agree","AID","all","art","at","attend","August","average","avoid","away","almost","along","amount","America","announce","answer","another","anyone","apply","around","arrive","humor","husband","hundredth","however","housing","hour","hot","honest","hope","holiday","hold","highly","Here","heat","hat","He","hardly","happen","hair"]

print(len(words))
use_words = []
use_persent = []
used_wordsAll = []
top_number = []

repert = 1000000
cheack = 1000
# 99999999
# 9999
test=[99999999,9999]
repert,cheack = test[0],test[1]
print(repert,"hel",cheack)

used_wordsAll = [0] * len(words)

# 0.000000286878759 1つの処理にかかる時間
cheackTime = (repert*cheack)*0.000000286878759

cheackTime = int(cheackTime)

setTime = str(cheackTime//3600) + "時間" + str(cheackTime//60) + "分"
print(setTime)

print(cheackTime,"秒")

for test in range(cheack):
    top_number = []
    use_words = []
    use_persent = []

    for k in range(len(words)):
        use_words.append(0)
        use_persent.append(0)

    for i in range(repert):
        a = random.randint(0,len(words)-1)
        # print(words[a])
        use_words[a] += 1
        used_wordsAll[a] += 1

    # print(use_words)

    for p in range(len(use_words)):
        use_persent[p] = use_words[p] / repert
        if use_persent[p] > 0.08:
            top_number.append(p)

    # for up in range(len(top_number)):
    #     print(words[top_number[up]])

    # print(use_persent)
    # print('\n')

for c in range(len(used_wordsAll)):
    use_persent[c] = (used_wordsAll[c] / (repert * cheack))

print(use_persent)

test_bun = ""
for t in range(5):
    test_bun += words[random.randint(0,len(words)-1)] + " "


print(test_bun,".")


end_time = time.time()
print("実行時間: {:.2f}秒".format(end_time - start_time))