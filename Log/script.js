const Simpan = document.getElementById("Button");
const Hasil = document.getElementById("hasil");

Simpan.addEventListener("click", function () {
    let username = document.getElementById("username").value;
    let password = document.getElementById("password").value;

    Hasil.innerHTML += `
        <div class="card p-2 my-2">
            <p><strong>Username: </strong> ${username}</p>
            <p><strong>Username: </strong> ${password}</p>
        </div>
    `;

    document.getElementById("usename").value = "";
    document.getElementById("password").value = "";
})