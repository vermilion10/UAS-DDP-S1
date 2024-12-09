# UAS-DDP-S1
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    Spesifikasi Soal UAS (diambil dari e-learning prodi)
   <h1>Disclaimer</h1> <p> Segala file yang terdapat pada repo ini murni digunakan sebagai bahan ajar. Terima kasih kepada dosen yang telah memberikan masalah untuk diselesaikan.</p> <p>Beberapa file dalam proyek ini, termasuk file <em>uas-mudah.c</em> dan <em>uas-sedang.c</em>, bukanlah hasil karya asli saya sepenuhnya. Kredit sepenuhnya diberikan kepada pencipta aslinya (CTTO: Credit To The Owner).</p>
</head>
<body>
    <h1>Menyortir Berat Durian (Sulit)</h1>
    <p>Seorang petani buah memiliki perkebunan durian yang sangat luas. Setiap musim panen tiba, ratusan ton durian durian berhasil dipanen dengan berat (satuan kg) berbeda-beda. Sebelum dijual, ratusan ton durian disortir berdasarkan beratnya masing-masing dari mulai terkecil sampai terbesar. Selain itu, petani juga dapat mencari berapa banyak durian yang memiliki berat tertentu.</p>
    <p>Buatlah program untuk melakukan sortir dan mencari jumlah durian yang memiliki berat tertentu dari sejumlah N durian yang diinputkan.</p>
    <h2>Spesifikasi Input</h2>
    <ul>
        <li>Baris pertama diisi dengan <strong>N</strong> jumlah durian yang diinputkan dengan tipe integer (0 &lt; N &lt; 200)</li>
        <li>Baris kedua diisi dengan berat (<strong>B</strong>) durian dalam satuan kg bertipe integer (N &gt; 0) sejumlah N durian yang dipisahkan oleh spasi. Input berat durian dapat diacak tidak terurut</li>
        <li>Baris ketiga diisi dengan berat durian yang ingin dicari</li>
    </ul>
    <h2>Spesifikasi Output</h2>
    <ul>
        <li>Baris pertama menampilkan berat durian (dipisahkan spasi) yang sudah diurutkan dari terkecil menuju terbesar sebanyak N durian</li>
        <li>Baris kedua menampilkan jumlah durian berdasarkan berat durian yang dicari. Jika berat durian tidak ditemukan, maka menampilkan "tidak ditemukan"</li>
    </ul>
    <h3>For example:</h3>
    <table border="1">
        <thead>
            <tr>
                <th>Test</th>
                <th>Input</th>
                <th>Result</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>TC1</td>
                <td>
                    10<br>
                    5 3 2 3 8 6 6 6 7 8<br>
                    3
                </td>
                <td>
                    1 2 3 3 5 6 6 6 7 8<br>
                    2
                </td>
            </tr>
            <tr>
                <td>TC2</td>
                <td>
                    10<br>
                    5 3 2 3 8 6 6 6 7 8<br>
                    10
                </td>
                <td>
                    1 2 3 3 5 6 6 6 7 8<br>
                    tidak ditemukan
                </td>
            </tr>
        </tbody>
    </table>
    <h1>Hitung Jeruk (Sedang)</h1>
    <p>Seorang petani buah memiliki perkebunan jeruk yang sangat luas. Setiap musim panen tiba, ratusan ton jeruk berhasil dipanen. Sebelum dijual, jeruk-jeruk tersebut terlebih dahulu diperiksa kualitasnya dan diberi label. Untuk jeruk dengan kualitas ekspor diberi label huruf 'E', untuk jeruk dengan kualitas lokal diberi label 'L' dan untuk jeruk kualitas rendah diberi label 'R'.</p>
    <p>Buatlah program untuk menghitung jumlah jeruk berdasarkan label jeruk dari sejumlah N jeruk yang diinputkan.</p>
    <h2>Spesifikasi Input</h2>
    <ul>
        <li>Baris pertama diisi dengan N jumlah jeruk yang diinputkan dengan tipe integer (0 &lt; N &lt; 200)</li>
        <li>Baris kedua diisi dengan label bertipe karakter sejumlah N (dipisah oleh spasi) dimana label 'E' untuk menandakan label ekspor, label 'L' untuk menandakan label Lokal dan label 'R' untuk menandakan label kualitas rendah.</li>
    </ul>
    <h2>Spesifikasi Output</h2>
    <ul>
        <li>Baris pertama menampilkan jumlah jeruk dengan kualitas ekspor.</li>
        <li>Baris kedua menampilkan jumlah jeruk dengan kualitas lokal.</li>
        <li>Baris ketiga menampilkan jumlah jeruk dengan kualitas rendah.</li>
    </ul>
    <h3>For example:</h3>
    <table border="1">
        <thead>
            <tr>
                <th>Test</th>
                <th>Input</th>
                <th>Result</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>TC1</td>
                <td>
                    6<br>
                    E E R L L L
                </td>
                <td>
                    2<br>
                    3<br>
                    1
                </td>
            </tr>
            <tr>
                <td>TC2</td>
                <td>
                    10<br>
                    E E E E E E L L L L
                </td>
                <td>
                    7<br>
                    3<br>
                    0
                </td>
            </tr>
        </tbody>
    </table>
    <h1>Triangle Problem (Mudah)</h1>
    <p>Seorang anak diminta untuk menentukan jenis segitiga dari tiga buah sisi segitiga (sisi a, sisi b dan sisi c) pada sekumpulan data. Segitiga yang dapat terbentuk adalah Segitiga Sama Sisi dengan ketiga sisi sama Panjang (a=b=c), Segitiga Sama Kaki dengan kedua sisi sama Panjang (a=b atau b=c atau a=c) dan Segitiga Sembarang dengan ketiga sisi tidak sama Panjang (a≠b; b≠c).</p>
    <p>Namun, ketiga nilai sisi segitiga dapat pula tidak membentuk segitiga ketika tidak memenuhi Teorema Pertidaksamaan Segitiga.</p>
    <p>Buatlah program untuk menentukan segitiga dari sisi pembentuk segitiga (sisi a, sisi b dan sisi c)</p>
    <h2>Spesifikasi Input</h2>
    <ul>
        <li>Baris pertama berisi nilai N jumlah segitiga yang diinputkan dengan tipe integer (N > 0). Baris berikutnya berisi ketiga sisi segitiga bertipe integer sebanyak N segitiga yang dipisahkan oleh spasi (a > 0, b > 0 dan c > 0).</li>
    </ul>
    <h2>Spesifikasi Output</h2>
    <ul>
        <li>"Not a Triangle", jika tidak memenuhi syarat Teorema Pertidaksamaan Segitiga</li>
        <li>"Equilateral Triangle", jika memenuhi syarat segitiga sama sisi</li>
        <li>"Isosceles Triangle", jika memenuhi syarat segitiga sama kaki</li>
        <li>"Scalene Triangle", jika memenuhi syarat segitiga sembarang</li>
    </ul>
    <h3>For example:</h3>
    <table border="1">
        <thead>
            <tr>
                <th>Test</th>
                <th>Input</th>
                <th>Result</th>
            </tr>
        </thead>
        <tbody>
            <tr>
                <td>Segitiga Sama Sisi</td>
                <td>1<br>5 5 5</td>
                <td>Equilateral Triangle</td>
            </tr>
            <tr>
                <td>Lebih dari satu segitiga</td>
                <td>2<br>4 4 5<br>7 10 5</td>
                <td>Isosceles Triangle<br>Scalene Triangle</td>
            </tr>
        </tbody>
    </table>
</body>
</html>


