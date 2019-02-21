def logistic(r):
    init = 0.7
    element = []
    for i in range(1,100):
        element.append(init)
        init = round(r * (1 - init) * init , 3)
    return element

path_w = "test1.txt"
data = [str(i) for i in logistic(1.50)]
with open(path_w, mode='w') as f:
    f.writelines('\n'.join(data))