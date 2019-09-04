nrTests = input()
nrTests = int(nrTests)

for i in range(nrTests):
    nrShops = input()
    nrShops = int(nrShops)
    shops = input()
    shops = shops.split()
    print(shops)
    shopList = []

    for i in shops:
        shopList.append(int(i))
    shopList.sort(reverse=True)
    print(shopList)