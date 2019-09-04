sentence = input()
ae = "ae"
sentence = sentence.split()
totalAe = 0

for word in sentence:
    if word.__contains__(ae):
        totalAe += 1

if totalAe/len(sentence) >= 0.4:
    print("dae ae ju traeligt va")
else:
    print("haer talar vi rikssvenska")

