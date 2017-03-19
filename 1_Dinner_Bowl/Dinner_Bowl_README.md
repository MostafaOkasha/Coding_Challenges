# Dinner Bowl | Difficulty: Easy  |  Source: Microsoft College Code Competition

### A group of friends have a tradition of going to dinner and then bowling every Friday night. They always order their meal at exactly 7:00 pm and go bowling immediately after dinner. These are teenagers, however, who still have a curfew of midnight. In order for everyone to get home by midnight, they must finish bowling by 11:00 pm. Like most groups, each member takes a different amount of time to finish their dinner. Luckily for this group of friends, they have an unheard of luxury: they know how long it will take for each individual meal to be served (after ordering their meal) and how long it will take each member to finish their meal.

The group only eats at restaurants in the same shopping center as the bowling alley they visit and they always give themselves 10 minutes to walk from the restaurant to the bowling alley. Sometimes they go to a very slow restaurant that takes so long that they do not have any time to bowl, but they never go to a restaurant that will take longer than 4 hours to eat at. Not everyone in the group is committed to go every week. The group would like a tool to tell them how many minutes they will have available for bowling after dinner.

Your task is to build that tool. Given the group of friends, how long it takes for each person to be served, and how long it takes for each member to eat their meal, provide (in minutes) how long they can bowl. It is noted that if they do not have enough time to walk to the bowling alley, they have 0 minutes to bowl.

Input definition

The first line of input will contain a single integer, t <= 100, which represents the number of weeks the group would like you to calculate. t test cases will follow. Each test case will start with a single integer, n <= 100, representing the amount of people in that week's group. The following n lines will provide two space-separated integers, S and C. S will represent how many minutes it takes for a group member's food to be served. C will represent how many minutes that group member takes to complete/eat their meal.

Output definition

Your output should contain t lines, each with a single integer representing the number of minutes the group will have to bowl for that week.

> Example input

> 3
> 4
> 5 20
> 3 10
> 7 7
> 8 12
> 3
> 3 30
> 4 15
> 5 28
> 2
> 180 20
> 180 55

> Example output

> 205
> 197
> 0
