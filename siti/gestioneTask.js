let Tasks = [
    {"titolo" :  "Studiare italiano", "done": false},
    {"titolo" : "Giocare a basket", "done": false},
    {"titolo" : "Svegliarsi", "done": true},
    {"titolo" : "cantare", "done": true},
    {"titolo" : "dormire", "done": true}
];

let elencoAzioniSvolte = document.getElementById("ul-done");
let elencoAzioniDaSvolgere = document.getElementById("ul-not-done");

let azioni = "";
let azioniSvolte = "";
Tasks.forEach(task => {
    if(task.done){
        azioni+="<li>" + task.titolo + "</li>"
    }
    else {
        azioniSvolte+="<li>" + task.titolo + "</li>"
    }
})
elencoAzioniSvolte.innerHTML=azioni;
elencoAzioniDaSvolgere.innerHTML=azioniDaSvolgere;