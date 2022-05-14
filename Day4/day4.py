import hashlib

# part2
m = hashlib.md5()

input = "ckczppom"

for num in range(10000000):
    digest = hashlib.md5((input + str(num)).encode())
    ret = digest.hexdigest()
    if ret[:6] == "000000":
        print(ret)
        print(input + str(num))  # part2:3938038
