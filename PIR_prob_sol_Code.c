/*A simple solution to PIR motion sensor Problems
 *by Ashraf Minhaj
 *6th October 2018
 *contact at ashraf_minhaj@yahoo.com
 *the Algorithm is also avilable at https://github.com/ashraf-minhaj/Simple-Algorithm-to-solve-PIR-sensor-problems--delay-output.
 *for details on this project https://ashrafminhajfb.blogspot.com/2018/10/problems-using-pir-sensor-always-high.html
*/
//it's a basic code

void main()
{
 delay(60000);  //wait for the PIR to become worm-to dunction

 goto R;

R:                  //your main code: say motion sensor code
{
 your main code here; 
 
 if((digitalRead(pir,HIGH)));  //If PIR output pin is HIGH
 {
  make noice/make sound/feedback;  //main code: light on off,alarm etc
  delay 5500;                //wait for 5.5 seconds
  goto R;               //again go to run-make everything work agin
  }

else
{
 go to R;  
} 

}
}
