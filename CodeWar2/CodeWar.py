def filter_list(l):
    for item in l:
        if(isinstance(item, str)): #learned what isinstance is, coolio
            l.remove(item)



List = [10, 24, 'Adfasfds']
filter_list(List)
print(List)