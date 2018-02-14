//Dash Pins
int buzzer = D02;

//variables
int messageSuccess = 0;


void setup() {

  //set pin to output
  pinMode(buzzer, OUTPUT);

  // initialize Serial communication for debugging
  Serial.begin(9600);
  Serial.println("Starting");

  //test sequence
  test_sequence();


  //send a starting messge to the Hologram cloud
  HologramCloud.sendMessage("Starting", "Holiday");

  //attach the SMS Handler Funciton
  HologramCloud.attachHandlerSMS(cloud_sms);

}

void loop() {

  //print loop to let us know we are running in serial
  Serial.println("loop");
  delay(3000);

}


void test_sequence() {
  int length = 15;
  char notes[] = "+DRMFSLTdrmfslt";
  int beats[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int tempo = 300;
  playSong(notes, beats, tempo, length);
}

void jingle_bells() {
  int length = 105;
  char notes[] = "RTLSDDDDTLSM MdTLZ rrdLTDTLSR RTLSMMMdTLrrrrmrdLS TTTTTTTrSLT dddddTTTTTLLTLr TTTTTTTrSLT dddddTTTTrrdLS ";
  int beats[] = {2, 2, 2, 2, 6, 1, 1, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 8, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 6, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 6, 2, 2, 4, 2, 2, 4, 2, 2, 3, 1, 6, 2, 2, 2, 3, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 4, 2, 2, 2, 2, 4, 2, 2, 4, 2, 2, 3, 1, 6, 2, 2, 2, 3, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 6, 8};
  int tempo = 100;
  playSong(notes, beats, tempo, length);
}

void we_wish_you_a_merry_xmas() {
  int length = 53;
  char notes[] = "RSSLSZMMMLLTLSZRRTTdTLSMRRMLZSRSSSZZSZMRLTLSrRRRMLZS ";
  int beats[] = {2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 4, 2, 2, 2, 2, 4, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 4, 4};
  int tempo = 150;
  playSong(notes, beats, tempo, length);
}

void deck_the_halls() {
  int length = 69;
  char notes[] = "SFMRDRMDRMFRMRD+DSFMRDRMDRMFRMRD+DRMFRMFSRMZSLTdTLSSFMRDRMDLLLLSFMRD ";
  int beats[] = {3, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 3, 1, 2, 2, 4, 3, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 3, 1, 2, 2, 4, 3, 1, 2, 2, 3, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 4, 3, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 3, 1, 2, 2, 4};
  int tempo = 150;
  playSong(notes, beats, tempo, length);
}

void silent_night() {
  int length = 50;
  char notes[] = "SLSMSLSMrrT ddSLLdTLSLSMLLdRLSLSMrrfrTdmdSMSFRDD  ";
  int beats[] = {3, 1, 2, 6, 3, 1, 2, 6, 4, 2, 4, 2, 4, 2, 6, 4, 2, 3, 1, 2, 3, 1, 2, 6, 4, 2, 3, 1, 2, 3, 1, 2, 6, 4, 2, 3, 1, 2, 6, 6, 2, 2, 2, 3, 1, 2, 6, 4, 2, 4};
  int tempo = 150;
  playSong(notes, beats, tempo, length);
}

void o_tannenbaum() {
  int length = 49;
  char notes[] = "SdddrmmmmrmfTrd ssmlssffffrsrfmm SdddrmmmmrmfTrd ";
  int beats[] = {4, 3, 2, 3, 2, 3, 2, 3, 2, 2, 2, 4, 4, 4, 4, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 3, 2, 3, 2, 3, 2, 3, 2, 2, 2, 4, 4, 4, 4, 8};
  int tempo = 125;
  playSong(notes, beats, tempo, length);
}

void frosty_the_snowman() {
  int length = 30;
  char notes[] = "SMFSdTdrdTLSTdrdTLLSdMSLSFMRD ";
  int beats[] = {4, 3, 1, 2, 4, 1, 1, 2, 2, 2, 2, 6, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 8, 8};
  int tempo = 160;
  playSong(notes, beats, tempo, length);
}

void rudolph_the_red_nosed_rainder() {
  int length = 112;
  char notes[] = "SLSMdLSSLSLSdTFSFRTLSSLSLSLMSLSMdLSSLSLSdTFSFRTLSSLSLSrdLLdLSMSFLSFMRMSLTTTddTLSFRSLSMdLSSLSLSdTFSFRTLSSLSLSrd ";
  int beats[] = {1, 2, 1, 2, 2, 2, 6, 1, 1, 1, 1, 2, 2, 8, 1, 2, 1, 2, 2, 2, 4, 1, 1, 1, 1, 2, 2, 8, 1, 2, 1, 2, 2, 2, 3, 1, 1, 1, 1, 2, 2, 8, 1, 2, 1, 2, 2, 2, 3, 1, 1, 1, 1, 2, 2, 8, 2, 2, 2, 2, 2, 1, 5, 2, 2, 2, 2, 8, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 2, 2, 1, 5, 1, 2, 1, 2, 2, 2, 5, 1, 1, 1, 1, 2, 2, 8, 1, 2, 1, 2, 2, 2, 5, 1, 1, 1, 1, 2, 2, 8, 8};
  int tempo = 160;
  playSong(notes, beats, tempo, length);
}

void jingle_bell_rock() {
  int length = 74;
  char notes[] = "dddTTTLTLMLTLMSLTLFRMFSLSRMFS LSLSLLRRdddTTTLTLMLTLMSLTLFRMFSLSRMFS LLTSd ";
  int beats[] = {1, 1, 2, 1, 1, 2, 1, 1, 2, 4, 1, 1, 2, 2, 2, 1, 1, 2, 4, 1, 2, 1, 1, 2, 1, 1, 1, 2, 4, 1, 1, 1, 1, 1, 2, 2, 2, 4, 1, 1, 2, 1, 1, 2, 1, 1, 2, 4, 1, 1, 2, 2, 2, 1, 1, 2, 4, 1, 2, 1, 1, 2, 1, 1, 1, 2, 4, 1, 1, 1, 2, 2, 4, 8};
  int tempo = 160;
  playSong(notes, beats, tempo, length);
}



void la_cucaracha() {
  int length = 38;
  char notes[] = "DDDFLDDDFL FFMMRRD DDDMSDDDMS drdPLSF ";
  int beats[] = {1, 1, 1, 3, 2, 1, 1, 1, 3, 5, 1, 2, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 3, 2, 1, 1, 1, 3, 5, 1, 2, 1, 1, 1, 1, 1, 4, 4};
  int tempo = 100;
  playSong(notes, beats, tempo, length);
}

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(tone);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { '+', 'D', 'R', 'M', 'F', 'Z', 'S', 'L', 'P', 'T', 'd', 'r', 'm', 'f', 'z', 's', 'l', 't'};
  int tones[] = { 4050, 3822, 3405, 3034, 2863, 2703, 2551, 2272, 2145, 2024, 1915, 1700, 1519, 1432, 1352, 1275, 1136, 1014};

  // play the tone corresponding to the note name
  for (int i = 0; i < 17; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void playSong(char notes[], int beats[], int tempo, int length) {

  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }

    // pause between notes
    delay(tempo / 2);
  }
}



//On received SMS, print the sender, timestamp and message
//Send a message to the cloud that an SMS was received with the sender number
//as the content and the tag SMSRX
void cloud_sms(const String &sender, const rtc_datetime_t &timestamp, const String &message) {
  Serial.println("CLOUD SMS RECEIVED:");
  Serial.print("SMS SENDER: ");
  Serial.println(sender);
  Serial.print("SMS TIMESTAMP: ");
  Serial.println(timestamp);
  Serial.println("SMS TEXT: ");
  Serial.println(message);
  String message2 = message;
  message2.toLowerCase();

  if (message2 == "jb" || message2 == "jingle bells") {
    jingle_bells();
    Serial.println("Jingle Bells");
  }
  else if (message2 == "ww" || message2 == "we wish you a merry xmas") {
    we_wish_you_a_merry_xmas();
    Serial.println("We Wish You a Merry Christmas");
  }
  else if (message2 == "dh" || message2 == "deck the halls") {
    deck_the_halls();
    Serial.println("Deck the Halls");
  }
  else if (message2 == "sn" || message2 == "silent night") {
    silent_night();
    Serial.println("Silent Night");
  }

  else if (message2 == "ot" || message2 == "o tannenbaum") {
    o_tannenbaum();
    Serial.println("O Tannenbaum");
  }

  else if (message2 == "ftsm" || message2 == "frosty the snowman") {
    frosty_the_snowman();
    Serial.println("Frosty the Snowman");
  }


  else if (message2 == "jbr" || message2 == "jingle bell rock") {
    jingle_bell_rock();
    Serial.println("Jingle Bell Rock");
  }

  else if (message2 == "rtrnrd" || message2 == "rudolph the red nosed raindeer") {
    rudolph_the_red_nosed_rainder();
    Serial.println("Rudolph the Red Nosed Raindeer");
  }

  else if (message2 == "lc" || message2 == "surprize") {
    la_cucaracha();
    Serial.println("La Cucaracha");
  }

  else if (message2 == "plz help") {
    HologramCloud.sendMessage("Jingle Bells, We Wish You a Merry Xmas, Deck the Halls, Silent Night, O Tannenbaum, Frosty the Snowman, Jingle Bell Rock, Rudolph the Red Nosed Raindeer, Surprize", "Help");
    Serial.println("Jingle Bells");
    Serial.println("We Wish You a Merry Xmas");
    Serial.println("Deck the Halls");
    Serial.println("Silent Night");
    Serial.println("O Tannenbaum");
    Serial.println("Frosty the Snowman");
    Serial.println("Jingle Bell Rock");
    Serial.println("Rudolph the Red Nosed Raindeer");
    Serial.println("Surprize");
    Serial.println();
  }
  else {
    Serial.println("Invalid Input");
  }


  if (HologramCloud.sendMessage(message, "SMSRX")) {
    Serial.println("SMS received message sent to cloud.");
  } else {
    Serial.println("Notification send failed.");
  }
}
