# Our World Robot Game Thailand 2019 (WRG2019) Bipedal Robot Design
Maker:    
TH-114 Pakapon Leelakahakit    
TH-350 Nattapol Suwansawang    
## Electronic Parts and Material
 **Electronic Parts**
  1.  ATX2+ (Main Control Board)
  2.  Digital Servo MG995 TowerPro (with Bracket Set) -> 2 ea
  3.  Digital Servo RDS3115 15kg Metal Gear (with Bracket Set) -> 6 ea
  4.  3300mAh 7.4V Li-Po Battery
  5.  Wireless-X Wireless Remote Control 2.4GHz    
  
 **Material**
  1.  Plaswood Sheet
  2.  Junction Box Lid
## Isometric Cad (without Main Control Board and Battery)
![image](https://user-images.githubusercontent.com/93368509/163623213-91344b37-e934-43eb-b467-9ef639e6aad5.png)
## Program Breakdown
### 1. Define Initial Servo Position
We don't know about actual angle at "initial state" in each servo we used, even if we set zero every servo.    
    
  ![image](https://user-images.githubusercontent.com/93368509/163682387-76151048-f6ce-42e0-8b5c-883d77158547.png)![image](https://user-images.githubusercontent.com/93368509/163682401-152c340e-2acf-4a60-9490-7466d5a9d985.png)    
**Figure 1** Possible Position at Servo in "zero position" (left), Possible Position When We Move Servo Freely in Any Position We Want (right)    
    
Because servo can cause error about gearbox and bracket (mechanical problem) that make servo in "zero position" didn't make our robot stay at "zero position" (at Figure 1 left). We need to set servo freely in any position we want and take note about servo angle when its go in position we want it to(at Figure 1 right).
**Take note about EVERY servo angle you want to use.**    
### 2. Define Walking Posture
First, Playing Field we use is have pattern according below.
![image](https://user-images.githubusercontent.com/93368509/163683333-5ec40f12-416e-4ef4-88fe-74655955d5d3.png)    
**Figure 2** Playing Field Pattern   
We need to walk around the obstacles and path we can use is must "referee can clearly see that it is a curve". And the path we use is according below.
![image](https://user-images.githubusercontent.com/93368509/163683600-b2627184-d114-4fc4-8b34-697b24ce1f98.png)
**Figure 3** walking Path We Use   
Thats mean **our robot must have ability to change facing direction.** So, we design robot with 8 servo motor, design on budget.    
![image](https://user-images.githubusercontent.com/93368509/163684105-7193991a-32de-452a-8c4f-1cd9809b2706.png)    
**Figure 4** Degree of Freedom of Robot    
Where servo 1 and 5 make robot can change facing direction, servo 4 and 8 make robot can lift another leg up and supporrt weight when robot "step forward" and servo 2, 3, 6 and 7 make robot can change legs posture when they walk.
