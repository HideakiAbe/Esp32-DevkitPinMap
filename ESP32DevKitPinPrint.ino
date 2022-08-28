//GPIOのピンの定義を記入すると
//ボードピンの順番に　定義がシリアルポートに出力されます。
//ピン番号に重複がないように記載してください。
const int SPI_MOSI =23;
const int SPI_MISO =19;
const int SPI_SCK = 18;
const int SD_CS   = 5;

const int LCD_CS = 16;
const int LCD_RST = 4;
const int LCD_DC = 17;


const int I2C_SDA = 21;
const int I2C_SCL = 22;

const int I2S_OUT = 25;
const int I2S_LRC = 26;
const int I2S_BLK = 27;

//重複があるとコンパイル時にエラーとなるので、重複のチェックとし利用してください。



//以下はESP-DEVKITボードの定義ですが
//利用するボードによっては変更が必要な場合もあります。
//ご自身の利用するボードに適宜変更ください。
struct pinMapping
{ const char *name;
  const int  pinNum;
} pinNameLeft[19] = {
  "3V3　　　　｜", -1,
  "EN(RESET) ｜", -1,
  "SVP       ｜", 36,
  "SVR       ｜", 39,
  "GPIO34    ｜", 34,
  "GPIO35    ｜", 35,
  "GPIO32    ｜", 32,
  "GPIO33    ｜", 33,
  "GPIO25    ｜", 25,
  "GPIO26    ｜", 26,
  "GPIO27    ｜", 27,
  "GPIO14    ｜", 14,
  "GPIO12    ｜", 12,
  "GND       ｜", -1,
  "GPIO13    ｜", 13,
  "SD2       ｜", 9,
  "SD3       ｜", 10,
  "CMD       ｜", 11,
  "5V        ｜", - 1
};
struct pinMapping pinNameRight[19] = {
  "｜       GND", -1,
  "｜    GPIO23", 23,
  "｜    GPIO22", 22,
  "｜    GPIO01", 1,
  "｜    GPIO03", 3,
  "｜    GPIO21", 21,
  "｜       GND", -1,
  "｜    GPIO19", 19,
  "｜    GPIO18", 18,
  "｜    GPIO05", 5,
  "｜    GPIO17", 17,
  "｜    GPIO16", 16,
  "｜    GPIO04", 4,
  "｜    GPIO00", 0,
  "｜    GPIO02", 2,
  "｜    GPIO15", 15,
  "｜       SD1", 8,
  "｜       SD0", 7,
  "｜       CLK", 6
};


void dispMap() {
  Serial.println();
  Serial.println("//                 BOARD ESP-DEVKIT  ");
  Serial.println("//                    ---ANTENA----");
  for (int i = 0; i < 19; i++) {
    Serial.print("//");
    switch (pinNameLeft[i].pinNum) {
      case TX:          Serial.print("      TX"); break;
      case RX:          Serial.print("      RX"); break;
      case SD_CS:       Serial.print("   SD_CS"); break;
      case SPI_MOSI:    Serial.print("SPI_MOSI"); break;
      case SPI_MISO:    Serial.print("SPI_MISO"); break;
      case SPI_SCK:     Serial.print(" SPI_SCK"); break;
      case I2C_SDA:     Serial.print(" I2C_SDA"); break;
      case I2C_SCL:     Serial.print(" I2C_SCL"); break;
      case LCD_CS:      Serial.print("  LCD_CS"); break;
      case LCD_DC:      Serial.print("  LCD_DC"); break;
      case LCD_RST:     Serial.print(" LCD_RST"); break;
      case I2S_OUT:     Serial.print(" I2S_OUT"); break;
      case I2S_LRC:     Serial.print(" I2S_LRC"); break;
      case I2S_BLK:     Serial.print(" I2S_BLK"); break;
      default:          Serial.print("        "); break;
    }
    Serial.printf(" %s ", pinNameLeft[i].name);
    Serial.print("           ");
    Serial.printf("%s ", pinNameRight[i].name);
    switch (pinNameRight[i].pinNum) {
      case TX:          Serial.print("      TX"); break;
      case RX:          Serial.print("      RX"); break;
      case SD_CS:       Serial.print("   SD_CS"); break;
      case SPI_MOSI:    Serial.print("SPI_MOSI"); break;
      case SPI_MISO:    Serial.print("SPI_MISO"); break;
      case SPI_SCK:     Serial.print(" SPI_SCK"); break;
      case I2C_SDA:     Serial.print(" I2C_SDA"); break;
      case I2C_SCL:     Serial.print(" I2C_SCL"); break;
      case LCD_CS:      Serial.print("  LCD_CS"); break;
      case LCD_DC:      Serial.print("  LCD_DC"); break;
      case LCD_RST:     Serial.print(" LCD_RST"); break;
      case I2S_OUT:     Serial.print(" I2S_OUT"); break;
      case I2S_LRC:     Serial.print(" I2S_LRC"); break;
      case I2S_BLK:     Serial.print(" I2S_BLK"); break;
      default:          Serial.print("        "); break;
    }
    Serial.println();
  }
  Serial.println("//                    -----USB-----");
}

void setup() {
  Serial.begin(115200);
  delay(100);
  dispMap();
}

void loop() {
  // put your main code here, to run repeatedly:

}
