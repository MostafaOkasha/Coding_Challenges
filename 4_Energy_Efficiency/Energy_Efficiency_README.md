# Energy Efficiency | Difficulty: Medium  |  Source: Microsoft College Code Competition

### You are in charge of developing a new thermostat that will control a house's heater in the winter. The goal of the thermostat is to be as energy efficient as possible while keeping the temperature inside the house to within N degrees of the target temperature, T. Your job is to develop an optimal heating algorithm that will consume the mimimum amount of energy required to keep the house heated (within the range [T-N, T+N]). The thermostat will be paired with an electric heater that has the following energy usage patterns:

When the heater is turned on after being turned off for any amount of time, it takes 1 minute to warm up and consumes 5 units of energy. During this time, the heater does not produce any heat that can be used to heat the house (the energy is wasted during warm-up).
For every minute that the heater operates after the warm-up period, it consumes 10 units of energy.
When the heater is running, the temperature inside the house will increase by 1 degree every minute. When the heater is turned off (or when it is being warmed-up), the temperature inside the house will fall 1 degree every minute. To keep calculations simple, every action happens on an exact minute boundary (i.e, time "ticks" once per minute). For each minute, you can decide whether the heater should be turned on or off.

Let's consider this example (time in minutes, starting at T0):

Starting temperature: 68
Target temperature: 68
Allowed variance (N): 2
Total time: 10 minutes

T0: 68 degrees (heater off)
T1: 67 degrees (heater warming up, 5 units)
T2: 66 degrees (heater on, 10 units)
T3: 67 degrees (heater on, 10 units)
T4: 68 degrees (heater on, 10 units)
T5: 69 degrees (heater on, 10 units)
T6: 70 degrees (heater off)
T7: 69 degrees (heater off)
T8: 68 degrees (heater off)
T9: 67 degrees (heater off)
Finish (T10): 66 degrees, 45 units total used
Input definition

The input will contain 20 lines. Each line is a separate simulation for which you should determine the minimum amount of heat required to maintain the house's temperature in the target range. Each line will consist of 4 positive integers separated by commas with no whitespace in the following order: starting temperature, target temperature (T), allowed variance (N), total time in minutes. The number of minutes could be up to 44,640 (31 days).

Output definition

The output should consist of 20 lines (one per input line/simulation). Each line should be a single integer containing the minimum number of energy units needed to maintain the house in the allowed temperature range. If it is not possible to maintain the temperature within the allowed range, you should print "not possible" instead of the integer value.

Example input

59,64,6,146
71,70,1,54
93,84,8,73
75,81,5,33
73,76,6,26063
87,85,2,42
52,61,10,242
70,60,7,48
61,69,9,74
70,60,10,17
71,72,2,26248
75,67,8,16
77,79,3,26
73,74,8,37617
86,79,7,13
71,63,8,90
85,80,4,60
81,84,4,55
73,67,6,4
61,65,6,80
Example output

765
325
not possible
not possible
135730
215
1245
not possible
385
0
147645
0
145
193930
0
385
not possible
290
0
410