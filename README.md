# Automatic-Visitor-Counter
A project based on keeping live attendance of a particular room

Description

Wastage of electricity is one of the main problems which we are facing now a days. In our home, school, colleges or industry we see that fan / lights are kept on even if there are nobody in the room or area / passage. This happens due to negligence or because we forgot to turn lights off or when we are in hurry. To avoid all such situations we have designed this project called “Automatic room light controller with visitor counter”. Main concept behind this project is known as “Visitor counter” which measures the number of persons entering in any room like seminar hall, conference room, classroom. This function is implemented using a pair of Infrared sensors. LCD display placed outside the room displays this value of person count. This person count will be incremented if somebody enters inside the room and at that time lights are turned on. And in reverse way, person count will be decremented if somebody leaves the room. When number of persons inside the room is zero, lights inside the room are turned off using a relay interface. In this way Relay does the operation of “Automatic room light controller”. Since this project uses 2 infrared sensors, it can be used as Bidirectional person counter as well.

Important components of the project:

1. IR Transmitter: We have implemented the Person counter module using 2 transmitters and 2 receivers. We have used Infra-Red transmitters. Reason behind choosing IR LED is, infrared beams are not visible to human eyes and they are not easily triggered by other sources in the environment. Transmitters used are IR LEDs.

2. IR Receiver: We have used IR sensor as an Infrared receiver. It is an active low device, which means it gives low output when it receives the Infrared rays. So when the IR rays are interrupted by any person then Microcontroller will receive a high pulse from the IR receiver.

3. Microcontroller: This is the CPU (central processing unit) of our project. We have used 89s51 which is a Microcontroller of 8051 family. The various functions of Microcontroller are like:

I. Bidirectional Visitor counter section – It is bidirectional because we have used 2 sensors on a single door. Microcontroller does the function of Reading the digital input from two infrared receivers and calculates the number of persons from them.

II. Display – Microcontroller sends the person count to LCD, so that the person operating this project should read the number of persons inside the room.

III. Automatic Room Light controller section – Microcontroller turns on the Room Light when person count is greater than or equal to one. And turn off lights when count is zero. This is done by Relay. Since relay is used, you can connect an AC bulb or DC bulb as per your requirement. We will provide a bulb holder to connect AC bulb.

4. LCD Display: We have used 16×2 alphanumeric Liquid Crystal Display (LCD) which means it can display alphabets along with numbers on 2 lines each containing 16 characters. This display should be placed outside the room. It displays various messages like “Person Counter Incremented”, “Person Counter Decremented”, “No of Person in Room = XYZ” here XYZ is the actual person count.

5. Relay: We have used 12 volt relay. Since Microcontroller can not turn on relay directly, we have used a Relay driver circuit. This circuit consists of a transistor which is used to turn on relay through Microcontroller. We have used a SPDT relay. SPDT means Single Pole Double Throw relay. In this project we have provided 2 pin connector as a output of Relay. One of these 2 pins is connected to the Normally open terminal of the Relay which is also known as NO contact.

6.Darlington pair: It is used to increase the current gain. Output of 555 IC is given to the Darlington circuit. And output of Darlington pair is given to IR led, thus it increases current through Infrared LEDs which helps in increasing the range of infra-red rays emitted from IR leds.

Applications:
1. Digital Visitor Counter can be used in various rooms like seminar hall, conference hall where the capacity of room is limited and should not be exceeded. Project will display actual number of persons inside the room.
2. “Automatic Room light Controller with Visitor Counter” can be used in class rooms, study rooms in colleges.
3. This project can also be used in our home because many times we come out of our bedroom or any other room and we forgot to turn off the room light.
4. This project can be used in Cinema halls, multiplex, malls as well as in temples to count the number of person entering inside. So that these places should not get over crowded to avoid congestion.

Advantages:
1. Main advantage of this project is that it helps in energy conservation. Because when there is nobody inside the room then lights are automatically turned off.
2. Human efforts to count the number of person is eliminated. Since this project does the automatic person counting with the help of two sensors installed on door frame.

Future Development:
1. Voice alarm system can be added to indicate that room is full & persons can’t enter inside.
2. We can increase the maximum number of persons that can be counted by implementing the external EEPROM ic.
3. We can send this data to a remote location using mobile or internet.
