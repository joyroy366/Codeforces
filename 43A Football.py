n= int(input())

team_lst=[]
for _ in range(n):
    team=input()
    team_lst.append(team)
    winner = max(set(team_lst), key=team_lst.count)
print(winner)