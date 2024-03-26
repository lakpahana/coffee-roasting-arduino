void setup() {
    //pins
}

void loop() {
    int start = 80;
    int time[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxrange[] = {87, 100, 121, 139, 150, 164, 170, 183, 198, 208};
  
    int max_time = sizeof(time) / sizeof(time[0]);
  
    stop_fan();
    stop_heater();

    if (get_temperature() > start) {
        start_fan();
        while (get_temperature() > start) {
            delay(1000);
        }
        stop_fan();
    }
  
    int lower_temp = start;
    for (int i = 0; i < max_time; i++) {
        int target_temp = maxrange[i];
        
        start_heater();
        unsigned long startTime = millis();
        
        while (millis() - startTime < 60000) {
            int current_temp = get_temperature();
            if (current_temp >= lower_temp && current_temp <= target_temp) {
                continue;
            } else if (current_temp > target_temp) {
                stop_heater();
                start_fan();
            }
            delay(1000);
        }
        
        stop_heater();
        lower_temp = target_temp;
    }
}

void start_fan() {
    
}

void stop_fan() {
 
}

void start_heater() {

}

void stop_heater() {
 
}

float get_temperature() {
  
}
