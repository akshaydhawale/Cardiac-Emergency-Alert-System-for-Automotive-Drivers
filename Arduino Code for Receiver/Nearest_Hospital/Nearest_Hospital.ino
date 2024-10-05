  double R = 6373.0;
  
  double lat = 28.4089; //Input coordinates from the GPS Module
  double lng = 77.3178;
  
  double h1lat = 27.4087;   //Database coordinates of hospitals
  double h1lng = 74.3178;
  double d1 = h1lat - lat;
  double d2 = h1lng - lng;
  double a1 = pow(sin(d1 / 2),2) + cos(lat) * cos(h1lat) * pow(sin(d2 / 2),2);
  double c1 = 2 * round(atan2(sqrt(a1), sqrt(1 - a1))* 180/3.14159265);
  double dist1 = R*c1;
  
  double h2lat = 22.4897;
  double h2lng = 79.1724;
  double d3 = h1lat - lat;
  double d4 = h1lng - lng;
  double a2 = pow(sin(d3 / 2),2) + cos(lat) * cos(h2lat) * pow(sin(d4 / 2),2);
  double c2 = 2 * round(atan2(sqrt(a2), sqrt(1 - a2))* 180/3.14159265);
  double dist2 = R*c2; 
  
  double h3lat = 32.4452;
  double h3lng = 78.3137;
  double d5 = h3lat - lat;
  double d6 = h3lng - lng;
  double a3 = pow(sin(d5 / 2),2) + cos(lat) * cos(h3lat) * pow(sin(d6 / 2),2);
  double c3 = 2 * round(atan2(sqrt(a3), sqrt(1 - a3))* 180/3.14159265);
  double dist3 = R*c3;  
  
//  double d1 = sqrt((h1lat - lat)*(h1lat - lat) + (h1lng - lng)*(h1lng - lng));
//  double d2 = sqrt((h2lat - lat)*(h2lat - lat) + (h2lng - lng)*(h2lng - lng));
//  double d3 = sqrt((h3lat - lat)*(h3lat - lat) + (h3lng - lng)*(h3lng - lng));

void setup() {
  Serial.begin(9600);
  if(dist1<dist2 && dist1<dist3){
      Serial.println("Hospital 1 is the closest.");
    }
    else if(dist2<dist3 && dist2<dist1){
      Serial.println("Hospital 2 is the closest.");
    }
    else{
      Serial.println("Hospital 3 is the closest.");
    }
}

void loop() {
}
