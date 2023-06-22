pipeline{
    agent none
    stages{
        
        stage('Checkout'){
            
             agent {
              label 'master'
          }
            
            steps{
                checkout changelog: false, poll: false, scm: scmGit(branches: [[name: '*/main']], extensions: [], userRemoteConfigs: [[url: 'https://github.com/Famicolo/googletest.git']])
            }
        }
        
        stage('Available-Tools control '){
            
            
            
             agent {
              label 'master'
          }
            
            steps{
                
                script{
                    
                    sh 'chmod +x check_tools.sh'
                    sh './check_tools.sh'
                    
                
                }
            }
        }
        
        stage('Execution of unittest'){
            
             agent {
              label 'master'
          }
            
            steps{
                sh 'g++ -o testmain1-2-4 testmain1-2-4.cpp googletest/samples/sample1_unittest.cc googletest/samples/sample2_unittest.cc googletest/samples/sample1.cc  googletest/samples/sample2.cc googletest/samples/sample4_unittest.cc googletest/samples/sample4.cc  -lgtest -lpthread'
                sh './testmain1-2-4'
                
                sh 'g++ -o sample10 googletest/samples/sample10_unittest.cc -lgtest -lpthread'
                sh './sample10'
                slackSend color: "good", message: "Unit tests correctly executed on ${env.JOB_NAME}_${env.BUILD_NUMBER}"
            }
            
        }
        
        stage('Build') {
            
             agent {
              label 'master'
          }
            
            steps {
                sh 'g++ -o managefile managefile.cpp  -lgtest -lpthread '
                sh './managefile input.txt output.txt'
                sh 'cat output.txt'
              
            }
            
        }
        
        
        
        stage('Docker Utilities'){
            
             agent {
              label 'master'
          }
            
            steps{
                sh 'docker build -t projectmaster03 .'
                sh 'docker run projectmaster03'
                sh 'docker login -u USERNAME_HERE -p PUT_PASSWORD_HERE'
                sh 'docker tag projectmaster03 famicolo/sweng_project:Img_projectmaster03'
                sh 'docker push famicolo/sweng_project:Img_projectmaster03'
                slackSend color: "good", message: "Docker image ${env.JOB_NAME}_${env.BUILD_NUMBER} created and available on Docker Hub"
                
            }
        }
        
        
    }    
    
    post {
        
    failure {
      // Istruzione da eseguire solo in caso di errore
      node('unittest_node'){
      
          script {
            slackSend color: "danger", message: "FAILURE in compiling ${env.JOB_NAME}_${env.BUILD_NUMBER} pipeline"
          
                }
        }
    }
    
  }
}
