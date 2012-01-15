`git init` stworzy lokalne repozytorium 

`git add .` dodaje wszystkie pliki do aktualizacji

`git commit -m 'first commit'` komentarz do dodanych plików

`git commit -a -m "usunieto niepotrzebne pliki"` flaga -a musi być przed -m działa także na usuniete pliki – komentarz jest na folderze



`git remote add origin git@github.com:pjaszczyszyn/UG_semestr_1.git` tworzymy skrót „origin” adresu  repozytorium na githubie 



`git remote rename origin ug` zmiana nazwy skrótu z origin na ug

`git remote rm origin` usunięcie skrótu origin

`git remote -v` sprawdzenie jakie skróty mamy dodane

`git remote show ug` sprawdzenie jakie skróty mamy dodane



`git push -u origin master` wrzucamy pliki do repo na githubie na branch „master”

`git push origin master` także usunie pliki, które zostały usuniete z komputera



`git log ` sprawdzamy historie zmian

`git pull ug master` pobieramy do siebie zmienione pliki z githuba

`git checkout` sprawdzamy zmiany

`git status` sprawdzamy zmiany





#Po dodaniu pliku:



`git st` sprawdzamy status git-a

`git add PLIK`dodaje PLIK do aktualizacji

`git ci -m 'komentarz do pliku'` komentarz tylko do dodanych plików | ci = commit

--dodajemy kolejny plik i komentujemy go--

`git push ug master` wrzucamy pliki do repo na githubie na branch „master”

`git st` sprawdzamy status git-a | st = status







#MOJE USTAWIENIA GIT-a (plik .gitconfig):



        [alias]

       br = branch -a

        co = checkout

        ci = commit

        df = diff

        lg = log -p

        lol = log --graph --decorate --pretty=oneline --abbrev-commit

        lola = log --graph --decorate --pretty=oneline --abbrev-commit --all

        ls = ls-files

        st = status

        [color]

        branch = auto

        diff = auto

        status = auto





#MOJE USTAWIENIA BASH-a (plik .bashrc):

        alias l='ls -l'

        alias ll='ls -la'

        alias gb='git branch -a'

        alias gl='git log -p'

        alias gt='git status'

        alias gp='git pull'