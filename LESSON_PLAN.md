# แผนการสอนและคัดเลือกโจทย์ติวสอบ Grader วิชา คพ.102 (CS102) [ฉบับเปิดคลาส & Grader Clinic]

เอกสารฉบับนี้จัดทำขึ้นเพื่อเป็นแนวทางการสอนสำหรับติวเตอร์ในการติวน้องนักศึกษาชั้นปีที่ 1 ใน **ห้องบรรยายใหญ่ (Large Lecture Room)** โดยแบ่งเวลาออกเป็น 2 ช่วง:
- **ช่วงที่ 1 (17:00 – 18:30 น.):** เน้นการปูพื้นฐานแก้ปัญหา Grader, แนะนำพี่ TA ประจำโซน และ 4 เสาหลักสำคัญ (Survival Kit)
- **ช่วงที่ 2 (18:30 – 20:00 น.):** 4 ข้อเจาะลึกตัดเกรด A/B+ (Deep Dive) โจทย์ยาว ตรรกะหลายชั้น

---

## 1. ยุทธศาสตร์การสอนและการจัดสรรเวลา

### ช่วงที่ 1: ปูพื้นฐาน Grader + 4 เสาหลัก (17:00 – 18:30 น.)
- **เปิดคลาส & Grader Clinic (15 นาที):** แนะนำทีม TA แบ่งโซนดูแล + ถอดรหัส Error ยอดฮิตที่ทำให้น้องได้ 0 คะแนน
- **4 ข้อหลัก (สูตร 10 + 7 นาทีต่อข้อ):**
  - **ติวเตอร์นำบนเวที (10–11 นาที):** แกะโจทย์ + วาด Logic + Live Coding สด + ชี้จุดตาย Grader
  - **น้องลงมือทำ + พี่ TA ประกบ (6–7 นาที):** น้องพิมพ์ใน Starter Template และปรึกษา TA ประจำโซน

### ช่วงที่ 2: 4 ข้อตัดเกรด A/B+ (18:30 – 20:00 น.)
- ใช้ **สูตร 12 + 8 นาทีต่อข้อ** เนื่องจากเนื้อหามีความซับซ้อนสูง ตรรกะหลายชั้น และต้องวิเคราะห์ Edge Case อย่างละเอียด

---

## 2. ตารางแผนการสอนภาพรวม 2 ช่วงเวลา

```mermaid
flowchart TD
    subgraph S1["ช่วงที่ 1 (17:00 - 18:30 น.) : Grader Clinic + 4 เสาหลัก (Survival Kit)"]
        direction TB
        A0["17:00 - 17:15 (15 นาที)<br><b>เปิดห้อง + แนะนำทีม TA + Grader Clinic</b><br>(ถอดรหัส Error ได้ 0 คะแนน & Setup สิ่งแวดล้อม)"] --> A1
        A1["17:15 - 17:32 (17 นาที)<br><b>ข้อ 1: BusTicket</b><br>(Loop + Modulo + Digit Extraction)"] --> A2["17:32 - 17:49 (17 นาที)<br><b>ข้อ 2: MoreThanMean</b><br>(1D Array + Two-Pass Processing)"]
        A2 --> A3["17:49 - 18:06 (17 นาที)<br><b>ข้อ 3: SumMatrix</b><br>(2D Array + Row/Col Traversal)"]
        A3 --> A4["18:06 - 18:25 (19 นาที)<br><b>ข้อ 4: SpecialMessage</b><br>(String + Delimiter + Scanning)"]
        A4 --> A5["18:25 - 18:30 (5 นาที)<br><b>สรุปช่วงแรก + พักเบรก</b><br>*(แถมโจทย์ Pattern: DrawFlag)*"]
    end

    subgraph S2["ช่วงที่ 2 (18:30 - 20:00 น.) : 4 ข้อเจาะลึกตัดเกรด A/B+ (Deep Dive)"]
        direction TB
        B0["18:30 - 18:34 (4 นาที)<br><b>เช็คชื่อช่วงสอง + ชี้เป้าข้อตัดเกรด</b>"] --> B1
        B1["18:34 - 18:54 (20 นาที)<br><b>ข้อ 5: ClassCancellation</b><br>(Simulation + Ceil Rounding Math)"] --> B2["18:54 - 19:14 (20 นาที)<br><b>ข้อ 6: SwapMatrix</b><br>(2D In-place Swap + Row-wise Max)"]
        B2 --> B3["19:14 - 19:34 (20 นาที)<br><b>ข้อ 7: LargestGroup</b><br>(Frequency Bucket Array + Tie-Breaking)"]
        B3 --> B4["19:34 - 19:54 (20 นาที)<br><b>ข้อ 8: MaxSumSubArray</b><br>(Sliding Window + Negative Number Trap)"]
        B4 --> B5["19:54 - 20:00 (6 นาที)<br><b>Q&A ปิดคลาส + แจกโจทย์ฝึกเอง</b><br>*(โบนัส String with Spaces: SumOfLoves)*"]
    end

    S1 --> S2
```

---

## 3. ช่วงที่ 1: 17.00 – 18.30 น. (Grader Clinic + 4 เสาหลักครอบคลุม 100%)

> **เป้าหมาย:** น้องที่จำเป็นต้องกลับบ้านตอน 18.30 น. จะเข้าใจการทำงานของระบบ Grader อย่างถูกต้อง ป้องกันการได้ 0 คะแนนจากข้อผิดพลาดเล็กน้อย พร้อมทั้งเห็นแนวคิดครบทั้ง 4 เสาหลักของภาษา C (Loop/Math, 1D Array, 2D Array, Strings) และมีเวลาเขียนตามจนรันผ่านจริง

---

### 🛠️ [17:00 - 17:15 น.] เปิดคลาส, แนะนำทีม TA และ Grader Clinic (15 นาที)

#### 1. แนะนำทีมงาน TA และระบบ Support ในห้องเรียนใหญ่ (4 นาที)
- **การแบ่งโซนความรับผิดชอบ:**
  - แบ่งห้องออกเป็น 3 โซนหลัก: **Zone A (ฝั่งซ้าย)**, **Zone B (ตรงกลาง)**, **Zone C (ฝั่งขวา)** และมี TA ลาดตระเวนโซนแถวหลัง
  - แนะนำชื่อและใบหน้าของพี่ TA ประจำแต่ละโซน เพื่อให้น้องกล้าเรียก
- **กติกาการขอความช่วยเหลือ:**
  - ให้น้องยกมือค้างไว้ พี่ TA ประจำโซนจะรีบเดินเข้าไปประกบทันที
  - **แนวทางของพี่ TA (TA Guideline):**
    - ❌ **ไม่พิมพ์โค้ดแทนเด็ดขาด** ให้น้องเป็นคนกดแป้นพิมพ์เอง 100%
    - ✔️ ชี้บรรทัดที่มีข้อผิดพลาดทางไวยากรณ์ (Syntax / Typo / ลืม Semicolon)
    - ✔️ ตั้งคำถามนำเพื่อให้น้องฉุกคิดเรื่อง Logic Trap (เช่น *"ลืมรีเซ็ตตัวแปรผลรวมหรือเปล่า?"*, *"ลูปนี้เข้าถึง index เกินขนาดอาร์เรย์ไหม?"*)
    - ✔️ ช่วยดูเรื่องสภาพแวดล้อม (GCC Compile, Terminal Path, Encoding UTF-8, การตั้งชื่อไฟล์)

#### 2. Grader Clinic: ถอดรหัสสารพัด Error และกับดัก 0 คะแนน (8 นาที)
ติวเตอร์เปิดสไลด์/หน้าจอ Live Demo จำลองข้อผิดพลาดจริงที่ทำให้นักศึกษาตกม้าตายใน Grader:

1. **Presentation Error (PE) / 0 คะแนนแบบไร้ร่องรอย:**
   - ⚠️ **มีข้อความ Prompt ขยะ:** Grader เปรียบเทียบผลลัพธ์แบบ Exact Match ตัวอักษรต่อตัวอักษร!  
     ❌ ห้ามเขียน: `printf("Enter n: "); scanf("%d", &n);`  
     ✔️ ต้องเขียน: `scanf("%d", &n);` เท่านั้น
   - ⚠️ **ลืมขึ้นบรรทัดใหม่ `\n` ท้ายคำตอบ:** หลายข้อกำหนดว่าเคอร์เซอร์ต้องตกลงมาบรรทัดใหม่หลังแสดงคำตอบเสร็จ
   - ⚠️ **เว้นวรรคเกิน (Trailing Space):** การพิมพ์ตัวเลขต่อด้วยช่องว่าง เช่น `printf("%d ", a[i]);` ถ้าตัวสุดท้ายมีเว้นวรรคเกิน อาจทำให้ Grader ปรับตก ให้ระวังโจทย์ที่สั่ง format เฉพาะ

2. **Compilation Error (CE):**
   - ลืม `#include <stdio.h>` หรือ `#include <string.h>`
   - สลับ Format Specifier: โดยเฉพาะ `double` ใน `scanf` **ต้องใช้ `%lf`** (ถ้าใช้ `%f` ค่าจะเพี้ยนหรือโปรแกรมพัง) ส่วนใน `printf` ใช้ `%f` หรือ `%.2f`
   - เผลอใช้คำสั่งหรือ Library ของ C++ (เช่น `cout`, `cin`, `<iostream>`, `bool` โดยไม่ได้ include `<stdbool.h>`)

3. **Wrong Answer (WA) จากกับดักคณิตศาสตร์และตัวแปร:**
   - ⚠️ **Integer Division:** ตัวเลขจำนวนเต็มหารกันจะได้จำนวนเต็มเสมอ เช่น `75 / 100` มีค่าเป็น `0` ทันที! ต้องแปลงเป็นทศนิยมก่อน เช่น `75.0 / 100` หรือ `(double)count / n`
   - ⚠️ **ลืมใส่ Header Comment ตามฟอร์แมตมธ.:**
     ```c
     /*
     NAME: นายสมชาย ใจดี
     SID: 66096xxxxx
     */
     ```
   - ⚠️ **ตัวแปรขยะ (Uninitialized Variables):** ลืมตั้งค่าเริ่มต้น `sum = 0;` หรือลืมเคลียร์ค่า Array เป็น 0 ด้วย `= {0};`

4. **Runtime Error (RTE / SegFault) & Time Limit Exceeded (TLE):**
   - **RTE:** จอง Array เล็กเกินไป เช่น โจทย์บอก $N \le 40$ แต่ประกาศ `int arr[40];` (ควรเผื่อเป็น `int arr[50];`) หรือลืมใส่ `&` หน้าตัวแปรใน `scanf`
   - **TLE:** ติด Infinite Loop ใน `while` เช่น ลืมเขียนคำสั่งขยับตัวแปร `n /= 10;` หรือ `i++;`

#### 3. สรุป Flow การส่ง Grader ที่ปลอดภัย (3 นาที)
1. **Local Test:** คอมไพล์และรันกับ Sample Input ของโจทย์ก่อนเสมอ
2. **Edge Case Test:** ลองทดสอบค่าขอบเขต (เช่น ค่าต่ำสุด $0$ หรือ $1$, ค่าติดลบ, ค่าสูงสุด)
3. **Clean Up:** ลบหรือคอมเมนต์คำสั่ง `printf` ที่ใช้ debug ออกให้หมด ก่อนอัปโหลดไฟล์ `.c` เข้า Grader

---

### ข้อ 1: ตั๋วรถเมล์ (BusTicket) — [17:15 - 17:32 น.] (17 นาที)
- **เสาหลัก:** Loop, Modulo `%`, Integer Division `/`, Nested While-loop (Digital Root)
- **โจทย์ย่อ:** รับหมายเลขตั๋วรถเมล์ ($\le 6$ หลัก) นำตัวเลขแต่ละหลักมาบวกกันเรื่อยๆ จนกว่าจะได้ผลลัพธ์เป็นเลขหลักเดียว ($< 10$)
- **จังหวะการสอน (17 นาที):**
  - **10 นาที (ติวเตอร์):** วาดภาพการแกะหลัก `n % 10` และตัดทิ้งด้วย `n /= 10` แสดงให้เห็นความต่างของลูปนอก (`while (n >= 10)`) และลูปใน (`while (n > 0)`)
  - **7 นาที (น้องทำ + TA):** น้องเปิดไฟล์ `01_BusTicket_starter.c` เติมโค้ดตาม แล้วทดสอบกับ Sample Input พี่ TA ประจำโซนช่วยดูคนที่ลืมรีเซ็ต `sum = 0` ในลูปนอก
- **โค้ดเฉลย:** [01_BusTicket.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/01_BusTicket.c) | **Starter:** [01_BusTicket_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/01_BusTicket_starter.c)

---

### ข้อ 2: มากกว่าค่าเฉลี่ย (MoreThanMean) — [17:32 - 17:49 น.] (17 นาที)
- **เสาหลัก:** 1D Array, Two-Pass Processing, Floating-point Precision
- **โจทย์ย่อ:** รับ $N$ ($1 \le N \le 40$) จากนั้นรับเลขทศนิยม $N$ จำนวน หาว่ามีกี่จำนวนที่มากกว่าค่าเฉลี่ย
- **จังหวะการสอน (17 นาที):**
  - **10 นาที (ติวเตอร์):** อธิบาย "ทำไมต้องมี Array?" (Pass 1 หา Mean, Pass 2 ตรวจตัวที่มากกว่า) ชี้เรื่องการใช้ `double` แทน `float` และระวัง Integer Division
  - **7 นาที (น้องทำ + TA):** น้องพิมพ์ตามใน `03_MoreThanMean_starter.c` พี่ TA เดินตรวจว่าน้องใช้เครื่องหมาย `>` (ไม่ใช้ `>=`) และใช้ `%lf` ใน `scanf` ถูกต้องหรือไม่
- **โค้ดเฉลย:** [03_MoreThanMean.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/03_MoreThanMean.c) | **Starter:** [03_MoreThanMean_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/03_MoreThanMean_starter.c)

---

### ข้อ 3: คำนวณผลบวกในเมทริกซ์ (SumMatrix) — [17:49 - 18:06 น.] (17 นาที)
- **เสาหลัก:** 2D Array, Nested Loop สำหรับรับตาราง, การวิ่งแถวและคอลัมน์
- **โจทย์ย่อ:** รับเมทริกซ์ $4 \times 4$ แล้วรับพิกัดเป้าหมาย $(r, c)$ หาผลรวมสมาชิกแถว $r$ + ผลรวมสมาชิกคอลัมน์ $c$
- **จังหวะการสอน (17 นาที):**
  - **10 นาที (ติวเตอร์):** วาดตาราง $4 \times 4$ ชี้ความต่างระหว่าง `matrix[r][j]` (แถวคงที่ วิ่งหลัก) และ `matrix[i][c]` (หลักคงที่ วิ่งแถว)
  - **7 นาที (น้องทำ + TA):** น้องเปิด `04_SumMatrix_starter.c` ฝึกเขียนลูป 2 มิติ พี่ TA ช่วยดูคนที่สลับลำดับ Index `[row][col]`
- **โค้ดเฉลย:** [04_SumMatrix.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/04_SumMatrix.c) | **Starter:** [04_SumMatrix_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/04_SumMatrix_starter.c)

---

### ข้อ 4: ข้อความพิเศษ (SpecialMessage) — [18:06 - 18:25 น.] (19 นาที)
- **เสาหลัก:** Strings, Delimiter Detection (`_`), Character Classification (Vowels)
- **โจทย์ย่อ:** รับข้อความภาษาอังกฤษคั่นด้วย `_` หาว่ามีกี่คำ และมีกี่คำที่ขึ้นต้นด้วยสระ (a, e, i, o, u ทั้งพิมพ์เล็ก/ใหญ่)
- **จังหวะการสอน (19 นาที):**
  - **11 นาที (ติวเตอร์):** สอนการเช็คจุดเริ่มคำ (`i == 0 || str[i-1] == '_'`) และเขียนฟังก์ชันย่อย `int is_vowel(char ch)`
  - **8 นาที (น้องทำ + TA):** น้องพิมพ์ตามใน `05_SpecialMessage_starter.c` พี่ TA เตือนเรื่อง Short-circuit evaluation (ต้องวาง `i == 0` ไว้หน้าเพื่อป้องกัน Out of Bound)
- **โค้ดเฉลย:** [05_SpecialMessage.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/05_SpecialMessage.c) | **Starter:** [05_SpecialMessage_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/05_SpecialMessage_starter.c)

*(ข้อสำรอง/ฝึก Pattern เอง: [DrawFlag.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/02_DrawFlag.c))*

---

## 4. ช่วงที่ 2: 18.30 – 20.00 น. (4 ข้อเจาะลึกตัดเกรด A/B+)

> **เป้าหมาย:** สำหรับน้องที่อยู่ต่อเพื่อลุยโจทย์ระดับตัดเกรด เน้นโจทย์ยาว ตรรกะหลายชั้น และกับดักคณิตศาสตร์/อัลกอริทึม

### ข้อ 5: การยกเลิกคลาสเรียน (ClassCancellation) — [18:34 - 18:54 น.]
- **ทักษะขั้นสูง:** Simulation, การคิดเลขปัดเศษขึ้น (`ceil`), เงื่อนไขเปรียบเทียบเวลา
- **โจทย์ย่อ:** จำลองการเข้าเรียนของนักศึกษา $n$ คน สายได้ไม่เกิน $t$ นาที ถ้าคนมาทันน้อยกว่า $k\%$ (ปัดเศษขึ้น) ให้ยกเลิกคลาส
- **จังหวะการสอน (20 นาที):**
  - **12 นาที (ติวเตอร์):** สอนสูตร Integer Math ปัดเศษขึ้น `req = (n * k + 99) / 100;` แทนการใช้ float ที่อาจมีทศนิยมเพี้ยน
  - **8 นาที (น้องทำ + TA):** น้องเขียนใน `06_ClassCancellation_starter.c` พี่ TA ช่วยดูเงื่อนไข `<= t` และการแสดงผล 2 บรรทัด
- **โค้ดเฉลย:** [06_ClassCancellation.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/06_ClassCancellation.c) | **Starter:** [06_ClassCancellation_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/06_ClassCancellation_starter.c)

---

### ข้อ 6: สลับค่าในเมทริกซ์ (SwapMatrix) — [18:54 - 19:14 น.]
- **ทักษะขั้นสูง:** 2D In-place Swap, การหา Row-wise Maximum
- **โจทย์ย่อ:** รับเมทริกซ์ $4 \times 5$ สลับค่าตำแหน่ง $(r_1, c_1)$ กับ $(r_2, c_2)$ แล้วหาค่ามากสุดของแต่ละแถว
- **จังหวะการสอน (20 นาที):**
  - **12 นาที (ติวเตอร์):** สอนเทคนิคการ Swap ด้วยตัวแปร `temp` และชี้จุดตาย: **ต้องรีเซ็ต `row_max = m[i][0]` ภายในลูปแถวเสมอ**
  - **8 นาที (น้องทำ + TA):** น้องเขียนใน `07_SwapMatrix_starter.c` พี่ TA เดินเช็คคนที่เผลอประกาศ `row_max` ไว้นอกลูปแถว
- **โค้ดเฉลย:** [07_SwapMatrix.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/07_SwapMatrix.c) | **Starter:** [07_SwapMatrix_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/07_SwapMatrix_starter.c)

---

### ข้อ 7: ตัวเลขจำนวนมากสุด (LargestGroup) — [19:14 - 19:34 น.]
- **ทักษะขั้นสูง:** Frequency Bucket Array, การจัดการกรณีความถี่เสมอ (Tie-Break)
- **โจทย์ย่อ:** รับตัวเลข $N$ ตัว (ค่า 1..20) หาตัวเลขที่ซ้ำมากที่สุด (ถ้าซ้ำเท่ากัน ให้ตอบตัวเลขที่มีค่ามากกว่า)
- **จังหวะการสอน (20 นาที):**
  - **12 นาที (ติวเตอร์):** สอนการใช้ Index เป็นตัวเลข `freq[val]++` และเทคนิคใช้เงื่อนไข `>=` เพื่อแก้ปัญหา Tie-break ในบรรทัดเดียว
  - **8 นาที (น้องทำ + TA):** น้องเขียนใน `08_LargestGroup_starter.c` พี่ TA ช่วยดูคนที่ลืมเคลียร์ศูนย์ในอาเรย์ความถี่ (`= {0}`)
- **โค้ดเฉลย:** [08_LargestGroup.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/08_LargestGroup.c) | **Starter:** [08_LargestGroup_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/08_LargestGroup_starter.c)

---

### ข้อ 8: ผลบวกมากที่สุดของอาร์เรย์ย่อย (MaxSumSubArray) — [19:34 - 19:54 น.]
- **ทักษะขั้นสูง:** Fixed Sliding Window (ขนาด 5), กับดักชุดข้อมูลติดลบ
- **โจทย์ย่อ:** รับตัวเลข $N$ ตัว (-100 ถึง 100) หาผลบวกต่อเนื่อง 5 ตัวที่มากที่สุด
- **จังหวะการสอน (20 นาที):**
  - **12 นาที (ติวเตอร์):** เตือนจุดตายระดับตำนาน **"ห้ามตั้ง `max = 0`"** เพราะชุดข้อมูลติดลบได้ทั้งหมด (ตัวอย่างตอบ `-1`) สอนเทคนิคเลื่อนหน้าต่าง `+ arr[i] - arr[i-5]`
  - **8 นาที (น้องทำ + TA):** น้องเขียนใน `09_MaxSumSubArray_starter.c` พี่ TA ช่วยดูเรื่อง Index ขอบเขตลูป
- **โค้ดเฉลย:** [09_MaxSumSubArray.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/09_MaxSumSubArray.c) | **Starter:** [09_MaxSumSubArray_starter.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Starter_Templates/09_MaxSumSubArray_starter.c)

*(ข้อโบนัสเสริมกลับบ้าน: [SumOfLoves.c](file:///c:/Users/Windows%2011/Desktop/University/Year2Semester1/CS102_Tutor/Solutions/10_SumOfLoves.c) สอนการใช้ `scanf("%[^\n]", str)` เพื่อรับ String ที่มีช่องว่าง)*
