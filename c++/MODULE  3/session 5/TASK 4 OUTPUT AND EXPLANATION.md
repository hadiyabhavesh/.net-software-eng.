***TASK 4 OUTPUT AND EXPLANATION***

***-----CODE-----***

***Musicplayer player = new spotifyplayer();***

***player.play("tera mera Rishta");***



***------OUTPUT-----***

***Streaming on spotify: tera mera Rishta***



***------EXPLANATION-----***

***1.Dynamic method dispatch: The reference variable(musicplayer player) belongs to the parent class, but the object belongs to the child class(spotifyplayer).***

***2.Runtime decision:During program execution, Java determines method calls based on the actual object created in memory, rather than the reference type.***

***3.Overridden Method: Since the SpotifyPlayer class overrides the play() method, the child class implementation is executed instead of the parent class implementation.***

